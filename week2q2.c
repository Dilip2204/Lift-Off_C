//Write a C program to print the sum of all the even elements and even position elements in an array.

#include <stdio.h>  

int main()
{
 int Size, i, a[10];
 int Even_Sum = 0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + a[i];
   }
 }
 
 for (int i = 1; i < Size; i = i+2) { 

      Even_Sum = Even_Sum + a[i];    
    
    }
  for (int i = 1; i < Size; i = i+2) {

     if(a[i] % 2 == 0)
     {
 	 Even_Sum = Even_Sum - a[i];
     }   
    
    }
 
 printf("\n The Sum of Even Numbers and Even Positioned Numbers in this Array = %d ", Even_Sum);
 return 0;
}  