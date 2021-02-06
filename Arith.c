#include <stdio.h>
int main()
{
    int x = 22,y = 4, c;
    
    c = x + y;
    
    printf("x+y = %d \n",c);
    
    c = x - y;
    
    printf("x-y = %d \n",c);
    
    c = x * y;
    
    printf("x*y = %d \n",c);
    
    c = x / y;
    
    printf("x/y = %d \n",c);
    
    c = x % y;
    
    printf("remainder = %d \n",c);
    
    return 0;
}