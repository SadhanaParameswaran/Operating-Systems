#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int n;
int arrival(int n) 
{
    if (n != 0) 
    {
        printf("Vehicle parked!");
        printf("\n");
        n = n - 1;
        printf("Number of parking lots available: %d", n);
        printf("\n");
        return n;
    } 
    else 
    {
        printf("No parking lots available!");
        printf("\n");
        return n;
    }
}

int departure(int n) 
{
    if (n == 10) 
    {
        printf("No vehicle for departure to happen!");
        printf("\n");
        return n;
    } 
    else 
    {
        printf("Vehicle departed!");
        printf("\n");
        n = n + 1;
        printf("Number of parking lots available: %d", n);
        printf("\n");
        return n;
    }
}
int main() 
{
    n = 10;
    int x;

    int p[2];
    int returnstatus;
    int pid, pid1;
    int readmessage[1];

    returnstatus = pipe(p);

    if (returnstatus == -1) 
    {
        printf("Unable to create pipe\n");
        return 1;
    }
    pid = fork();

    if (pid == -1) 
    {
        return 1;
    }

    // child process 1
    if (pid == 0) 
    {
        int c;
        if (read(p[0], & c, sizeof(c)) == -1) 
        {
            return 3;
        }
        n = arrival(n);

        if (write(p[1], & c, sizeof(c)) == -1) 
        {
            return 4;
        }
    }

    // child process 2
    if (pid1 == 0) 
    {
        int c;
        if (read(p[0], & c, sizeof(c)) == -1) 
        {
            return 5;
        }
        n = departure(n);
        if (write(p[1], & c, sizeof(c)) == -1) 
        {
            return 6;
        }
    }

    // parent process
    else 
    {
        do 
        {
            printf("Enter your choice: ");
            printf("\n");
            printf("1. Arrival");
            printf("\n");
            printf("2. Departure");
            printf("\n");
            printf("3. Exit");
            printf("\n");
            scanf("%d", & x);
            printf("\n");
            switch (x) 
            {
            case 1:
                if (write(p[1], & x, sizeof(x)) == -1) 
                {
                    return 7;
                }
                n = arrival(n);
                if (read(p[0], & x, sizeof(x)) == -1) 
                {
                    return 8;
                }
                break;
            case 2:
                if (write(p[1], & x, sizeof(x)) == -1) 
                {
                    return 9;
                }
                n = departure(n);
                if (read(p[0], & x, sizeof(x)) == -1) 
                {
                    return 10;
                }
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice!");
                printf("\n");
            }
        }
        while (x != 1 || x != 2 || x != 3);
    }

    close(p[0]);
    close(p[1]);

    return 0;
}
