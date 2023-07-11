#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(int argc,char *argv[])
{
int i,j,m,n,f;
void *ptr;
int shmid = shmget((key_t)171717,4096,IPC_CREAT|0666);
ptr = shmat(shmid,NULL,0666);
printf("CHILD\n");
sscanf(argv[1],"%d",&m);
sscanf(argv[2],"%d",&n);
m = atoi(argv[1]);
n = atoi(argv[2]);
for(i=m;i<=n;i++)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
f=1;
break;
}
}
if(f==0)
{
sprintf(ptr,"%d ",i);
printf("%d ",i);
ptr+=strlen(ptr);
}
}
return 0;
}
