#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/*int main()
{
    char word[20];
    char text[1000000];
    word[strcspn(word,"\n")]='\0';
    for(int i=0;word[i];i++)
    word[i]=tolower(word[i]);
  for(int i=0;text[i];i++)
   text[i]=tolower(text[i]);
   int lenw=strlen(word);
   int lent=strlen(text);
   int count=0;
   int f=0;
   int i=0;
   
   while(i<lent)
   {
    
    while(i<lent&&text[i]==' ')
    i++;
    if(i>=lent)
    break;
    int s=i;
    int j=i;
     while(j<lent&&text[j]!=' ')
     j++;
     int wol=j-i;
    if(wol==lenw&&strncmp(text+s,word,lenw)==0)
    {
     count++;
     if(f==0)
     f=s;
    }
      i=j;
   }
   if(count==0)
   printf("-1\n");
   else
   {
    printf("%d %d",count,f);
   }
  return 0;
}*/

/*int main()
{
  char s[201];
  int n=0;
  int count=0;
  int f=0;
  scanf("%d %s",&n,s);
  if(n<2)
  printf("0\n");
  for(int i=0;i<n-1;i++)
  {
    
    if((s[i]=='v'&&s[i+1]=='v')||(s[i]=='k'&&s[i+1]=='k'))
    {
      if(s[i]=='v'&&s[i+1]=='v'&&f==0)
      {
              s[i+1]='k';
            f=1;
       }
      if(s[i]=='k'&&s[i+1]=='k')
      {
       if(i==0&&f==0)
       {
       s[i]='k';
  
       f=1;
       }
       if(i>0&&f==0&&s[i-1]!='v')
       {
        s[i]='v';
       
        f=1;
       }
      }
      
    }
  }
  for(int i=0;i<n-1;i++)
  {
    if(s[i]=='v'&&s[i+1]=='k')
    count++;
  }
  printf("%d",count);
  return 0;
}*/
//VK
//基础的链表
/*
struct student 
{
  int num;
  float score;
  struct student*next;
};
struct student *createlink(int );
struct student *createnode();
void insertw(struct student*);
struct student* inserth(struct student*);
void insert(struct student*,int);
struct student* find(struct student*,long i);
void d(struct student *,int u);

int main()
{
  int n;
  scanf("%d",&n);
  struct student *head=NULL;
  
}
struct student*createnode()
{
  struct student *p=NULL;
  p=(struct student*)malloc(sizeof(struct student));
  if(p==NULL)
  return NULL;
  else
  {
   scanf("%d %f",&p->num,&p->score);
  p->next=NULL;
  return p;
  }
}
struct student *creatlink(int n)
{
  struct student*head=NULL,*p1,*p2;
  for(int i=0;i<n;i++)
  {
    if(i==0)
    head=p1=createnode();
    else{
      p2=createnode();
      p1->next=p2;
      p1=p2;
    }
  }
  return head;
}
void insertw(struct student*head)
{
  if(head==NULL)
  return;
  struct student*p=head;
  while(p->next!=NULL)
  {
     p=p->next;
  }
  struct student *p2=createnode();
   p->next=p2;
  
}
struct student* inserth(struct student*head)
{
  struct student*pp=head;
  struct student*p1=createnode();
  if(p1==NULL)
  return NULL;
  else
  p1->next=pp;
  
 return p1;
}
void insert(struct student*head,int n)
{
  if(head==NULL)
  return;
  struct student*p=head;
  while(p->next&&p->next->num!=n)
  {
     p=p->next;  
  }
  if(p->next&&p->next->num==n
  )
  {
  struct student*p2=createnode();
  p2->next=p->next;
  p->next=p2;
  }
}
struct student *find(struct student*head,long i)
{
  if(head==NULL)
  return NULL;
  struct student*p=head;
  while(p->next&&p->next->num!=(int)i)
  {
    p=p->next;
  }
  struct student*r=NULL;
  if(p->next&&p->next->num==(int)i)
{
  r=p->next;
  return r;
}
else
return NULL;
}
void d(struct student*head,int u)
{
  if(head==NULL)
  return;
  struct student *p=head;
  while(p->next&&p->next->num!=u)
  {
    
    p=p->next;
  }
  struct student*q=p->next;
  p->next=p->next->next;
  free(q);
}
*/
#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[3001]={0};
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=1e9;
    int sum=0;
    for(int i=1;i+m-1<=n;i++)
    {
         sum=0;
       for(int j=0;j<m;j++)
           sum+=a[i+m];
        if(sum<min&&sum!=0)
            min=sum;
    }
    printf("%d\n",min);
    return 0;
}