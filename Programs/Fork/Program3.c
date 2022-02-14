#include <stdio.h>

void main()
{
    int n,pid,fact,sq;
    printf("Enter a number: ");
    scanf("%d",&n);
    

    pid = fork();
    
    if(pid==0)
    {
        printf("\nIts child with PID = %d",getpid());
        sq = n * n;
        printf("\nThe square of the number is: %d",sq);
    }
    else
    {
        printf("\nIts parent with PID = %d",getpid());
        for(int i=1;i<=n;i++)
        {    
           fact = fact * i;    
        }    
        printf("\nFactorial of %d is: %d",n,fact); 
    }
}
