//Write a program to print X pattern using loops

#include <stdio.h>

int main()
{
    int x, y, N;
    int count;

    printf("Enter N: "); //N is no. of rows and columns till centre.
    scanf("%d", &N);

    count = N * 2 - 1;
    for(x=1; x<=count; x++)
    {
        for(y=1; y<=count; y++)
        {
            if(y==x || (y==count - x + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}