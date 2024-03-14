//program to convert a number into octal,hexadecimal and binary.

#include<stdio.h>
int main()
{
  int num,a[10],i;
  printf("enter the number:\n");
  scanf("%d",&num);

  printf("\noctal number:%o",num);
  printf("\nhexadecimal number:%x",num);

  for(i=0;num>0;i++)
   {
    a[i]=num%2;
    num=num/2;
   }

 printf("\nbinary number: ");
 for(i=i-1;i>=0;i--)
  {
   printf("%d",a[i]);
  }

}
