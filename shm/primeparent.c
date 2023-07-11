#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <string.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
int main(int argc, char *argv[])
{
int i;
pid_t pid;
const int SIZE=4096;
void *ptr;
int shmid;
if(argc<2)
{
printf("Error : Not passing arguments in Command Line\n");
exit(0);
}
else
{
pid = fork();
if(pid==0)
{
execlp("./prime","prime",argv[1],argv[2],NULL);
}
else if(pid >0)
{
wait(NULL);
printf("\nPARENT : Child Completed\n");
shmid = shmget((key_t)171717,4096,0666);
ptr = shmat(shmid,NULL,0666);
printf("Parent printing\n");
printf("%s",(char *)ptr);
printf("\n");
shmdt(ptr);
}
return 0;
}
}
