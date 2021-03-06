/*
 * shm-client - client program to demonstrate shared memory.
 */
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHMSZ     27

int main()
{
    int shmid;
    key_t key;
    char *shm, *s;

    /*
     * We need to get the segment named
     * "5678", created by the server.
     */
    key = 5678;

    /*
     * Locate the segment.
     */
    if ((shmid = shmget(key, SHMSZ, 0666)) < 0) 
    {
        perror("shmget");
        exit(1);
    }

    /*
     * Now we attach the segment to our data space.
     */
    if ((shm = shmat(shmid, NULL, 0)) == (char *) -1) 
    {
        perror("shmat");
        exit(1);
    }

    /*
     * Now read what the server put in the memory.
     */
    int input[2];
    input[0] = *shm;
    shm++;
    input[1] = '\0';
    int fact=1;
     if (input[0]%2 == 0)
        {
            printf("The number is even");
        }
        else
        {
            printf("The number is odd");
        }
    
        
    exit(0);
    return 0;

}
