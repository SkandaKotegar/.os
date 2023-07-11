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
shmid = shm_open("VK",O_RDONLY,0666);
ftruncate(shmid,1024);
psm = mmap(0,1024,PROT_READ, MAP_SHARED, shmid,0);
printf("Key/ID/FD of Shared Memory : %d\n",shmid);
printf("Shared memory of consumer is attached at %p\n",psm);
printf("%s",(char*)psm);
printf("\n");
shm_unlink("OS");
return 0;
}
