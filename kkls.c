#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <locale.h>
#define COLC "\033[0m"
#define COLD "\033[32m"
#define COL  "\033[34m"
#define COLL "\033[35m"
#define COLY "\033[33m"
#define COLZ "\033[36m"
#define MAX 1024
int _a = 0;
int _l = 0;
int _R = 0;
int _r = 0;
int _t = 0;
int _i = 0;
int _s = 0;
struct Dirdetail
{
    char name[256];
    char allpath[1024];
    struct stat at;
};


char type(mode_t mode)
{
    if (S_ISDIR(mode)) return 'd';
    else if (S_ISREG(mode)) return '-';
    else if (S_ISCHR(mode)) return 'c';
    else if (S_ISBLK(mode)) return 'b';
    else if (S_ISFIFO(mode)) return 'p';
    else if (S_ISLNK(mode)) return 'l';
    else if (S_ISSOCK(mode)) return 's';
    else return '?';
}

void quan(mode_t mode, char m[11])
{
    m[0] = type(mode);
    m[1] = (mode & S_IRUSR) ? 'r' : '-';
    m[2] = (mode & S_IWUSR) ? 'w' : '-';
    m[3] = (mode & S_IXUSR) ? 'x' : '-';
    m[4] = (mode & S_IRGRP) ? 'r' : '-';
    m[5] = (mode & S_IWGRP) ? 'w' : '-';
    m[6] = (mode & S_IXGRP) ? 'x' : '-';
    m[7] = (mode & S_IROTH) ? 'r' : '-';
    m[8] = (mode & S_IWOTH) ? 'w' : '-';
    m[9] = (mode & S_IXOTH) ? 'x' : '-';
    m[10] = '\0'; 
}
char*color(const char*name,mode_t mode)
{
    if(S_ISDIR(mode))
        return COLD;
    else if(S_ISLNK(mode))
        return COLL;
    else if(mode &(S_IXUSR|S_IXGRP|S_IXOTH))
     return COLZ;
     else if(name[0]=='.'||(strcmp(name,"..")==0))
     return COLY;
     else
     return COLC;
}
void path(const char*name,const char*oripath,char*goal)
{
    strcpy(goal,oripath);
    if(oripath[strlen(oripath)-1]!='/')
    {
        strcat(goal,"/");
    }
    strcat(goal,name);
}
void printl(const char*allpath,struct stat*filer,const char*name)
{
    char m[11];
    quan(filer->st_mode,m);
    struct group *grop = getgrgid(filer->st_gid);
    const char *gr_name = (grop == NULL) ? "none" : grop->gr_name;
    struct passwd *pas = getpwuid(filer->st_uid);
   // struct tm *timeinfo = localtime(&(filer->st_mtime));
     char*t=ctime(&filer->st_mtime);
    t[strlen(t)-1]='\0';
        printf("%s %2ld %s %s %5ld %s ", m, filer->st_nlink, pas->pw_name, gr_name, filer->st_size,t);
     printf("%s%s%s", color(name,filer->st_mode), name, COLC);

    if (S_ISLNK(filer->st_mode))
    {
        char link[1024];
        size_t len= readlink(allpath, link, sizeof(link) - 1);
        if (len != -1)
        {
            link[len] = '\0';
            printf(" -> %s", link);

        }
    }

    printf("\n");
}
int judge(struct Dirdetail *fe)
{
    const char *d = fe->name;
    char c;
    while ((c = *d))
    {
        if (c & 0x80) return 0;
        d++;
    }
    return 1;
}

 int compare_dir(const void *a, const void *b)
{
    int cmp=0;
    struct Dirdetail *m = (struct Dirdetail *)a;
    struct Dirdetail *n = (struct Dirdetail *)b;
     int mh = (m->name[0] == '.');
    int nh = (n->name[0] == '.');
    if (_a == 1 && mh!= nh) {
        return mh? 1:-1;
    
    }
    int jg=judge(m);
    int jg2=judge(n);
   
    if(_t==1)
    {
        if(m->at.st_mtime!=n->at.st_mtime)
        {
            if(m->at.st_mtime<n->at.st_mtime)
            cmp=1;
            else if(m->at.st_mtime>n->at.st_mtime)
            cmp=-1;
           
           
        }
         else
            cmp=0;
        return cmp;
    }
     if(_s==1)
    {
        if(m->at.st_size!=n->at.st_size)
        {
            if(m->at.st_size<n->at.st_size)
          cmp=-1;
            else if(m->at.st_size>n->at.st_size)
            cmp=1;
            
        }
         else
            cmp=0;
        return cmp;
    }
     if(_i==1)
    {
        if(m->at.st_ino!=n->at.st_ino)
        {
            if(m->at.st_ino<n->at.st_ino)
               cmp=-1;
             else if( m->at.st_ino>n->at.st_ino)
             cmp=1;
            
        }
        else
        cmp=0;
        return cmp;
    }
     if(jg&&jg2)
     {

    cmp= strcasecmp(m->name,n->name);
     }
     else
    cmp= strcoll(m->name, n->name);
    if(_r)
    cmp=-cmp;
    return cmp;
}
void prrri(const char*lu)
{
   struct Dirdetail alldir[MAX]; 
   int count=0;
DIR *dir = opendir(lu);
        if (dir == NULL)
        {
            perror("opendir");
            exit(1);
        }
        struct dirent *filr = readdir(dir);
         while (filr != NULL)
        {
            if(filr->d_name[0] == '.' && _a == 0)
            {
              filr=readdir(dir);
                 continue;

            }
snprintf(alldir[count].allpath, sizeof(alldir[count].allpath), "%s/%s", lu, filr->d_name);

             if(_a==1)
            {
            strcpy(alldir[count].name,filr->d_name);
              path(filr->d_name, lu, alldir[count].allpath);
              
            }
            else{
                            strcpy(alldir[count].name,filr->d_name);
              path(filr->d_name, lu, alldir[count].allpath);
            }
            if (lstat(alldir[count].allpath, &alldir[count].at) == -1)
            {
                perror("lstat");
             filr = readdir(dir);
                continue;
            }
            else
          count++;
            filr = readdir(dir);
        }
        closedir(dir);
        qsort(alldir, count, sizeof(struct Dirdetail), compare_dir);
             long long blo=0;
             if(_l==1)
             {
             for(int i=0;i<count;i++)
             {
                blo+=alldir[i].at.st_blocks;
             }
              printf("总计 %lld\n",blo/2);
            }
           for(int i=0;i<count;i++)
           {
            struct Dirdetail *f=&alldir[i];
            
            if(_i==1)
            {
                printf("%8ld   ",f->at.st_ino);
            }
            if(_s==1)
            {
                printf("%4ld   ",f->at.st_size);
            }
            if(_l==1)
            {
                printl(f->allpath,&f->at,f->name);
               
                continue;
            }
            if(_l==0)
            {
               
                 printf("%s%s%s", color(f->name,f->at.st_mode), f->name, COLC);
                printf("\n");
            }
            
            if (_R && S_ISDIR(f->at.st_mode) && 
             strcmp(f->name, ".") != 0 && strcmp(f->name, "..") != 0) {
        
             printf("\n%s:\n",f->allpath);
             prrri(f->allpath);  
         }
           }
}
int main(int argc, char *argv[])
{
    setlocale(LC_COLLATE, "");
    char*lu=".";
   int count =0;
    for (int i = 1; i < argc; i++)
    {
        if (argv[i][0] == '-')
        {
            for (int j = 1; j < strlen(argv[i]); j++)
            {
                if (argv[i][j] == 'a') _a = 1;
                if (argv[i][j] == 'l') _l = 1;
                if (argv[i][j] == 'R') _R = 1;
                if (argv[i][j] == 'r') _r = 1;
                if (argv[i][j] == 't') _t = 1;
                if (argv[i][j] == 'i') _i = 1;
                if (argv[i][j] == 's') _s = 1;
            }
        }
        else
            lu = argv[i];
    }
    prrri(lu);
        return 0;
}