//Simulation of "cat>>f1 f2" command 
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
char ch;
if(argc<2)
{
printf("\nYou are not passing the Filename\n");
exit(1);
}
FILE *fp1,*fp2;
fp1=fopen(argv[1],"a");
fp2=fopen(argv[2],"r");
if(fp2==NULL&&fp1==NULL)
{
printf("File doesn't exist\n");
exit(1);
}
while((ch=fgetc(fp2))!=EOF)
fprintf(fp1,"%c",ch);
fclose(fp1);
fclose(fp2);
return 0;
}
