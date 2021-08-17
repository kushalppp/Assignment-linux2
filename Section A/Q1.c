#include<stdio.h>
#include<unistd.h>

int main()
{
printf("befor forking\n");
fork();
printf("after forking\n");
}

Output:-
befor forking
after forking
after forking


b)zombie process:-
#include<stdio.h>
#include<unistd.h>

main()
{
int p;
p=fork();
if (p>0)
{
  printf("parent process %d",p);
  sleep(60);
}
else
{
printf("child process %d",p);
}
 }

PID STAT CMD
  147 Z    [q2] <defunct>
its going in zombie process.
for removing that we use 
wait();function so it convert in single process.