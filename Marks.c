
#include <stdio.h>
 
int main(void) {
  float k,l,m,n,o,percentage;
 
  printf("Enter marks scored in Physics : \n");
  scanf("%f",&k);
  printf("Enter marks scored in Chemistry : \n");
  scanf("%f",&l);
  printf("Enter marks scored in Maths : \n");
  scanf("%f",&m);
  printf("Enter marks scored in Biology : \n");
  scanf("%f",&n);
  printf("Enter marks scored in Computer : \n");
  scanf("%f",&o);
 
  percentage = (k+l+m+n+o)/5;
 
  printf("You scored: %f %% \n",percentage);
 
  if(percentage>100){
    printf("Invalid marks assigned");
    }
  
  else if(percentage>=90 && percentage<=100){
    printf("Your grade: A");
    }
  
  else if(percentage>=80 && percentage<90){
    printf("Your grade: B");
    }
  
  else if(percentage>=70 && percentage<80){
    printf("Your grade: C");
    }
  
  else if(percentage>=60 && percentage<70){
    printf("Your grade: D");
    }
  
  else if(percentage>=40 && percentage<60){
    printf("Your grade: E");
    }
  
  else{
    printf("Your grade: F");
    }
 
  return 0;
}