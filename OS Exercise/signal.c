#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


static void sig_handler(int sig)
{
    int retval;

    if(sig==SIGCHLD) // 等待子程序的結束狀態
    {
        wait(&retval);        
        printf("CATCH SIGNAL PID=%d\n",getpid());
    }

}


int main(int argc,char *argv[])
{
   
    // 呼叫 signal 來接收 SIGCHLD 信號
    signal(SIGCHLD,sig_handler);
    pid_t PID=fork();// 從呼叫 fork 開始, 會分成兩支程序多工進行

    switch(PID){
        case -1:
            perror("forK()");
            exit(-1);
        case 0:
            printf("[Child] I'm Child process\n");
            printf("[Child] Child's PID is %d\n", getpid());
            sleep(5);
            break;
        default:
            printf("[Parent] I'm Parent process\n");
            printf("[Parent] Parent's PID is %d\n", getpid());
    }
    return 0;
}
