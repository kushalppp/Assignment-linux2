#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

main()
{
int x,z,y,w,i=1, stat;
pid_t pid[i];
pid_t vpid[w];
pid_t zpid[z];
pid_t xpid[x];
pid_t ypid[y];
 if(fork()==0)
{
printf("hello from child[1] PID=%d\n",getpid());
system(" firfox");
 exit(1+i);
}
if(fork()==0)
{
printf("hello from child[2] PID=%d\n",getpid());
system("gedit"); 
exit(1+w);
}
if(fork()==0)
{
printf("hello from child[3] PID=%d\n",getpid());
system("gcc"); 
exit(1+z);
}
if(fork()==0)
{
printf("hello from child[4] PID=%d\n",getpid());
 exit(1+x);
}
if(fork()==0)
{
printf("hello from child[5] PID=%d\n",getpid());
 exit(1+y);
}

 pid_t kpid = waitpid(ypid[y],&stat,0);
  printf("child %d terminated with stat:%d\n",kpid,WEXITSTATUS(stat));
   pid_t lpid = waitpid(xpid[x],&stat,0);
  printf("child %d terminated with stat:%d\n",lpid,WEXITSTATUS(stat));
pid_t npid = waitpid(zpid[z],&stat,0);
  printf("child %d terminated with stat:%d\n",npid,WEXITSTATUS(stat));
   pid_t mpid = waitpid(vpid[w],&stat,0);
  printf("child %d terminated with stat:%d\n",mpid,WEXITSTATUS(stat));
pid_t opid = waitpid(pid[i],&stat,0);
  printf("child %d terminated with stat:%d\n",opid,WEXITSTATUS(stat));

printf("Hello this is parent");   

}

Output:-
hello from child[1] PID=388
hello from child[2] PID=389
hello from child[3] PID=391
hello from child[4] PID=393
hello from child[5] PID=395
child 393 terminated with stat:0
sh: 1: child 395 terminated with stat:1
sh: 1: firfox: not foundgedit: not found

child 388 terminated with stat:2
child 389 terminated with stat:1
gcc: fatal error: no input files
compilation terminated.
child 391 terminated with stat:1
Hello this is parent