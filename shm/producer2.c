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
printf("Enter some data to write into shared memory : ");
read(0,buf,20);
sprintf(psm,"%s",buf);
shmdt(psm);
return 0;
}
