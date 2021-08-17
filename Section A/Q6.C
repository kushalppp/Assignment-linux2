#include<stdio.h>
#include<unistd.h>
 
main()
{
char str[]="ABCD....";
char str1[]="abcd...";
FILE *fp;
fp = fopen("hello.txt","w");
if(fp==NULL )
 {
printf("can not open file Here is error");
exit(1);
}

if(fork()==0)
{
fprintf(fp,"%s",str);
}
else
{
fputs(str1,fp);
}
fclose(fp);
}

