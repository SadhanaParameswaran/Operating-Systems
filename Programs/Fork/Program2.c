#include <stdio.h>

void main()
{
    int pid;

    pid = fork();
    
    if(pid==0)
    {
        printf(" Its child with PID = %d",getpid());
        printf("\n Process ID returned to child by fork = %d",pid);
    }
    else
    {
        printf("\nIts parent with PID = %d",getpid());
        printf(" \nPID value returned by fork = %d",pid);
    }
}
