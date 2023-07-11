//Simulation of "cp" command 
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
fp1=fopen(argv[1],"r");
fp2=fopen(argv[2],"w");
if(fp2==NULL&&fp1==NULL)
{
printf("File doesn't exist\n");
exit(1);
}
while((ch=fgetc(fp1))!=EOF)
fprintf(fp2,"%c",ch);
fclose(fp1);
fclose(fp2);
return 0;
}
