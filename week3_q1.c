// Write a program in C to find the square of any number using the function.

#include<stdio.h>

int main()
{
    float num, square;
    
    printf("Enter any Integer : ");
    scanf("%f", &num);
    
    square = num * num;
    printf("Square of given integer %.2f is  =  %.2f", num, square);
    
    return 0;
}