#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>


int main()
{
    while(1)
    {
        printf("mini$");
        fflush(stdout);
        char cmd[100];
        if(scanf("%s",cmd)!=1)
        break;
        pid_t pid=fork();
        if(pid==0)
        {
            char*argv[]={cmd,NULL};
            execvp(cmd,argv);
            perror("execvp");
            exit(1);
        }
        else{
     waitpid(pid,NULL,0);
        }
        
    }
    return 0;
}