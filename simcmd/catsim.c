//Simulation of "cat" command 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
FILE *fp1;
char ch;
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
while((ch=fgetc(fp1))!=EOF)
printf("%c",ch);
fclose(fp1);
return 0;
}
