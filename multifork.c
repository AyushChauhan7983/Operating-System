#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	fork();
	printf("HI GRAPHIAN!!\n");
	fork();
	printf("Process id: %d\n",getpid());
	return 0;
}
