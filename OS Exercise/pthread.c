#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void printMsg(char *msg)
{
    int *status=malloc(sizeof(int));
    *status=1;
    printf("%s\n",msg);
    pthread_exit(status);
}
int main(int argc,char **argv)
{
    pthread_t threadID;
    int *status=malloc(sizeof(int));
    printf("create a new thread\n");
    pthread_create(&threadID, NULL, (void *) printMsg, argv[1]);
    printf("created thread %d\n",threadID);
    pthread_join(threadID, (void**) &status);
    printf("Thread %d exited with status %d\n", threadID, *status);

    return 0;

}