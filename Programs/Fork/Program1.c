#include <stdio.h>
void main()
{
    int pid;

    pid = fork();
    
    if(pid==0)
    {
        printf("Its child with PID = %d",getpid());
    }
    else
    {
        printf("Its parent with PID = %d",getpid());
    }
}
