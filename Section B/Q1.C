#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

main()
{
int i, stat;
pid_t pid[5];
for (i=0; i<5; i++)
{
 if((pid[i]=fork())==0)
{
printf("hello from child[%d]\n",i);
exit(1+i);
}
}
for (i=0;i<5;i++)
{
pid_t xpid = waitpid(pid[i],&stat,0);
  printf("child %d terminated with stat:%d\n",xpid,WEXITSTATUS(stat));
}
printf("Hello this is parent");
}

OUTPUT:-
hello from child[0]
hello from child[1]
hello from child[2]
hello from child[3]
hello from child[4]
child 228 terminated with stat:1
child 229 terminated with stat:2
child 230 terminated with stat:3
child 231 terminated with stat:4
child 232 terminated with stat:5
Hello this is parent