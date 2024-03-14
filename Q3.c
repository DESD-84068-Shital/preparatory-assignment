//Fibonacci series

#include<stdio.h>
int main()
{
 int number,i,sum;
 printf("Enter the number:\n");
 scanf("%d",&number);

 int num1=0;
 int num2=1;
 printf("Fiboncci series:\n");
 printf("%d%d",num1,num2);

 for(i=0;i<number;i++)
  {
   sum=num1+num2;
   printf("%d",sum);
   num1=num2;
   num2=sum;
  }

}
