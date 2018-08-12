#include <stdio.h>
#include <unistd.h>
int main()
{
    pid_t id = fork();
    if(id < 0)
    {
        perror("fork");
        return 1;
    }
    else if(id == 0)
    {
        while(1)
        {
            printf("child(%d)# i am running!\n",getpid());
            sleep(1);
        }
    }
    else
    {
        int i = 5;
        while(i)
        {
            printf("parent(%d)# i am going to dead... %d\n",getpid(),i--);
            sleep(1);
        }

    }
    return 0;
}
