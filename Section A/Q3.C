#include <stdio.h> 
#include <unistd.h> 
	  
	int main() 
	{ 
	    if (fork()) { 
		if (!fork()) { 
		    fork(); 
		    printf("1 "); 
		} 
		else { 
		    printf("2 "); 
		} 
	    } 
	    else { 
		printf("3 "); 
	    } 
	    printf("4 "); 
	    return 0; 
	}
Output:-
3 4 2 4 guruguru@DESKTOP-7KU2AFQ:/mnt/c/users/Kushal Kumar/coding/linux/process$ 1 4 1 4