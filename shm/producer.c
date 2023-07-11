#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <fcntl.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/stat.h>

int main()
{
void *psm;
char buf[20];
int shmid;
shmid = shm_open("VK",O_CREAT | O_RDWR,0666);
ftruncate(shmid,1024);
psm = mmap(0,1024,PROT_WRITE, MAP_SHARED, shmid,0);
printf("Key/ID/FD of Shared Memory : %d\n",shmid);
printf("Shared memory of producer is attached at %p\n",psm);
printf("Enter some data to write into shared memory : ");
read(0,buf,20);
sprintf(psm,"%s",buf);
return 0;
}
