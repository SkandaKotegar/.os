#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
void *threadfun();
int i,j,n;
void main()
{
pthread_t T;
pthread_create(&T,NULL,threadfun,NULL);
printf("Inside Main Thread\n");
for(i=5;i<=10;i++)
{
printf("i=%d\n",i);
sleep(1);
}
}
void *threadfun()
{
printf("Inside Thread\n");
for(j=20;j<=25;j++)
{
printf("j=%d\n",j);
sleep(1);
}
}
