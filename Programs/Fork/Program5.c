#include <stdio.h>

void main()
{
    int n,pid,fact,sq;
    printf("Enter a number: ");
    scanf("%d",&n);
    

    pid = fork();
    
    if(pid==0)
    {
        printf("\nThis is child process with PID = %d",getpid());
        sq = n * n;
        printf("\nSquare: %d",sq);
    }
    else
    {
        printf("\nThis is parent process with PID = %d",getpid());
        for(int i=1;i<=n;i++)
        {    
           fact = fact * i;    
        }    
        printf("\nFactorial of %d is: %d",n,fact); 
    }
}
