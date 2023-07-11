#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main()
{
void *psm;
char buf[20];
int shmid;
shmid = shmget((key_t)1122,1024,0666|IPC_CREAT);
psm = shmat(shmid,NULL,0666);
printf("Key/ID/FD of Shared Memory : %d\n",shmid);
printf("Shared memory of producer is attached at %p\n",psm);
printf("Data read from Shared Memory : %s",(char *)psm);
printf("\n");
shmctl(shmid,IPC_RMID,NULL);
return 0;
}
