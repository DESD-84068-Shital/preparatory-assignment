//program on command line argument to display a table of a given number.

#include<stdio.h>
int main(int argc,char *argv[])
{
 printf("count of arguments=%d\n",argc);
 printf("enter the number:\n");
 int a=atoi(argv[1]);

 for(int i=0;i<=10;i++)
  {
   int table=a*i;
   printf("%d\n",table);

  }




}
