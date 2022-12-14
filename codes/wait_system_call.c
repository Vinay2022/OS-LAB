#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(void)
{
    pid_t pid;
    int i;
    pid=fork();
    if(pid<0){
        printf("failed");
        exit(-1);
    }
    else if(pid==0){
        printf("Child process: ");
        printf("\n Odd numbers: ");
        for(i=1;i<10;i+=2)
                printf("%d ",i);
        printf("\n Child terminated");
    }
    else{
        wait(NULL);
        printf("Parent process: ");
        printf("\n Even number ");
        for(i=0;i<=10;i+=2)
            printf("%d ",i);
        printf("\n Parent terminated");
    }
    return 0;
}
