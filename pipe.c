#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
int fd[2], n;
char buffer[100];
pid_t p;
pipe(fd);
p = fork();
if (p > 0)
{
printf("Parent passing value to child\n");
write(fd[1], "Hello\n", 6);
// wait(NULL);
}
else
{
printf("Child returning value\n");
n = read(fd[0], buffer, 100);
write(1, buffer, n);
}
}
