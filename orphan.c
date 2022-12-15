#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int pid=fork();
	int a,b,c;
	if(pid==0)
	{
		printf("Enter a number: ");
		scanf("%d",&a);
		if(a%2==0)
			printf("%d is even\n",a);
		else
			printf("%d is odd\n",a);
		printf("Orphan Process\n");
	}
	
	else
	{
		printf("Enter two numbers: ");
		scanf("%d%d",&b,&c);
		if(b>c)
			printf("%d is greater\n",b);
		else
			printf("%d is greater\n",c);
	}

	return 0;
}
