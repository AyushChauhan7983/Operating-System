#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
   int pid;
   pid=fork();
   if(pid==0)
   {
      printf("child process");
   }
   else if(pid>0)
   {
       printf("parent process");
   }
   else
   {
       printf("error");
   }
   
   return 0;
}
