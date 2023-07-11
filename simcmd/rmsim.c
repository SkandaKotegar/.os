#include <stdio.h>
#include <stdlib.h>
void main()
{
char fn[10];
printf("Enter Source Filename\n");
scanf("%s",fn);
if(remove(fn)==0)
printf("File Removed\n");
else
printf("File cannot be removed\n");
}
