#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int pid=fork();
	if(pid==0)
	{
		printf("Child Process id: %d\n",getpid());
	}
	
	else if(pid>0)
	{
		sleep(20);
		printf("Parent Process id: %d\n",getpid());
	}
	
	else
	{
		printf("Nothing has created\n");
	}
	return 0;
}
