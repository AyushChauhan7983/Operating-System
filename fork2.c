#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
     int pid = fork();
     if(pid==0)
     {
        int n,fact=1;
        printf(" enter the number : ");
        scanf("%d",&n);
        for(int i=n;i>1;i--)
        {
           fact*=i;
        }
        
        printf("Factorial of the number is : %d",fact);
     } 
     else
     {
        int n;
        printf(" enter the number : ");
        scanf("%d",&n);
        int a=1,b=1,c;
        printf("%d %d ",a,b);
        while(n--)
        { 
           c=a+b;
           printf("%d ",c);
           a=b;
           b=c;
           
        }
        
     }
     return 0;
}
