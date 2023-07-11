//Simulation of "head" command 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
FILE *fp1;
int count=10;
char temp[100];
if(argc<2)
{
printf("\nYou are not passing the Filename\n");
exit(1);
}
fp1=fopen(argv[1],"r");
if(fp1==NULL)
{
printf("File doesn't exist\n");
exit(1);
}
while(fgets(temp,100,fp1)&&count>0)
{
printf("%s",temp);
count--;
}
fclose(fp1);
return 0;
}
