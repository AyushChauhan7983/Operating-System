#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	fork();
	printf("Process id: %d\n",getpid());
	return 0;
}
