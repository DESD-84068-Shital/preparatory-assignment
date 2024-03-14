// Factorial of a number.

#include<stdio.h>
int main()
{
  int num,i;
  int factorial=1;
  printf("Enter number:\n");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
   {
     factorial*=i;
   }
 
 printf("factorial of %d is %d",num,factorial);

}
