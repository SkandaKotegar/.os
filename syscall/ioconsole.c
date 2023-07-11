#include <unistd.h>
#include <stdio.h>
#define BS 30
int main()
{
char buf[BS];
int n;
printf("Enter a String : ");
n=read(0,buf,BS);
printf("Number of Characters read : %d\n",n);
printf("\nThe String is :\n");
write(1,buf,n);
return 0;
}

