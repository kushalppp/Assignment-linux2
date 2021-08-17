#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

main()
{
int stat;
int i;
if(fork()==0)
{
printf("[son] pid %d from[parent] pid %d\n",getpid(),getppid());
if(fork()==0)
{
printf("[son] pid %d from[parent] pid %d\n",getpid(),getppid());
if(fork()==0)
{
printf("[son] pid %d from[parent] pid %d\n",getpid(),getppid());
if(fork()==0)
{
printf("[son] pid %d from[parent] pid %d\n",getpid(),getppid());
if(fork()==0)
{
printf("[son] pid %d from[parent] pid %d\n",getpid(),getppid());
i=getpid();
}
}
}
}
}
pid_t xpid = waitpid(i,&stat,0);
  printf("child %d terminated with stat:%d\n",xpid,WEXITSTATUS(stat));
}

Output:-
[son] pid 281 from[parent] pid 280
[son] pid 282 from[parent] pid 281
[son] pid 283 from[parent] pid 282
[son] pid 284 from[parent] pid 283
[son] pid 285 from[parent] pid 284
child -1 terminated with stat:127
child 285 terminated with stat:0
child 284 terminated with stat:0
child 283 terminated with stat:0
child 282 terminated with stat:0
child 281 terminated with stat:0