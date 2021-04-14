//	Write a C program to print the factorial of a given number using functions.

#include <stdio.h>

int fact(int);

void main()
{
	int n,fac;
 
  	printf("Enter a number:\n");
  
  	scanf("%d",&n);
  	
      fac=fact(n);
    
    printf("Factorial of given number(%d) = %d\n",n,fac);

}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}