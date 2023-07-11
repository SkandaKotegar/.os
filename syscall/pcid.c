#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
pid_t my_pid, parent_id, child_pid, wid;
int i=5;
child_pid = fork();
if(child_pid<0)
{
printf("Fork Failed\n");
exit(0);
}
if(child_pid==0)
{
printf("[CHILD] This is Child Process\n");
my_pid = getpid();
parent_id = getppid();
printf("[CHILD] My PID = %d\n",my_pid);
printf("[CHILD] My Parent's PID = %d\n",parent_id);
printf("[CHILD] i=%d\n",--i);
printf("[CHILD] Child Process loaded with another program\n");
execlp("/bin/ls","ls",NULL);
}
else
{
printf("[PARENT] This is Parent Process\n");
my_pid = getpid();
parent_id = getppid();
printf("[PARENT] My PID = %d\n",my_pid);
printf("[PARENT] Waiting for Child to terminate\n");
wid=wait(NULL);
printf("[PARENT] Resuming after termination of Child %d\n",wid);
printf("[PARENT] My Parent's PID = %d\n",parent_id);
printf("[PARENT] My Child's PID = %d\n",child_pid);
printf("[PARENT] i=%d\n",++i);
}
return 0;
}
