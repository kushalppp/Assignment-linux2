#include <stdio.h>
#include <unistd.h> 
	
int main() 
	{ 
	    if (fork() || fork()) 
		fork(); 
	    printf("1 "); 
	    return 0; 
	}

Output:-
1 1 guruguru@DESKTOP-7KU2AFQ:/mnt/c/users/Kushal Kumar/coding/linux/process$ 1 1 1