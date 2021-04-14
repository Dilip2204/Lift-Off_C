//Write a C program to find the largest and smallest element in an array.

#include<stdio.h>

int main()
{
 int a[50],i,n,large,small;

printf("\n Enter the size of array : ");

scanf("%d",&n);

printf("\n Input the array elements : ");

for(i=0;i<n;++i)

scanf("%d",&a[i]);

large=small=a[0];

for(i=1;i<n;++i) {

if(a[i]>large)

large=a[i];

if(a[i]<small)

small=a[i];

}

printf("\nThe smallest element is %d\n",small);
printf("\nThe largest element is %d\n",large);

return 0;
}