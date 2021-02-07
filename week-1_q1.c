int main()
{
    int x, y;
    int sum, sub, mult, mod, div;

    printf("Enter your first integer,x : ");
    scanf("%d", &x);

    printf("Enter your second integer,y : ");
    scanf("%d", &y);

    sum = x + y;
    sub = x - y;
    mult = x * y;
    div = x / y;
    mod = x % y;
    


    printf("x + y = %d \n", sum);
    printf("x - y = %d \n", sub);
    printf("x * y = %d \n", mult);
     printf("x / y = %d \n", div);
    printf("Remainder = %d \n", mod);
   


    return 0;
}
