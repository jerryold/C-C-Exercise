#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


#define THREAD_INTERVAL 500
#define cr_start()      \
    static int __s = 0; \
    switch (__s) {      \
    case 0:

#define cr_yield                 \
    {                            \
        __s = __LINE__;          \
        usleep(THREAD_INTERVAL); \
        return;                  \
    case __LINE__:;              \
    }
#define cr_end() \
    }            \
    __s = 0;

static int condition=1;

static void user_thread1()
{
    cr_start();
    for(;;)
    {
        printf("Run %s\n", __FUNCTION__);
        cr_yield;
    }
    cr_end();


}
static void user_thread2()
{
    cr_start();
    for(;;)
    {
        if(condition)
        {
            printf("Run %s - (1)\n", __FUNCTION__);
            cr_yield;
        }
        printf("Run %s - (2)\n", __FUNCTION__);
        condition = !condition;
        cr_yield;


    }    



    cr_end();

}
int main()
{
    for(;;)
    {
        user_thread1();
        user_thread2();
    }
    return 0;
}