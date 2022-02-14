#include <stdio.h>

int main()
{
    pid = fork();

    if(pid>0)
    {
        //parent process space
        printf("Parent");
    }
    else
    {
        //child process space
        printf("Child");
    }
}
