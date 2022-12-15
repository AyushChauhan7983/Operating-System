#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <wait.h>

int main()
{
	int pid=fork();
	if(pid==0)
	{
		printf("child process id: %d\n",getpid());
	}
	else if(pid>0)
	{
		wait(NULL);
		printf("Zombie process resolved\n");
		printf("Parent id: %d\n",getpid());
	}
	
	else
	{
		printf("Nothing has created\n");
	}
	return 0;
}
