// program on command line argument to find maximum number.

#include<stdio.h>
int main(int argc,char *argv[])
{
  printf("count=%d\n",argc);

  printf("%s",argv[0]);
  printf("\nEnter the numbers:\n");
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  int c=atoi(argv[3]);

  if(a>b && a>c)
  printf("a is greater\n");

  else if(b>a && b>c)
  printf("b is greater\n");

  else
  printf("c is greater\n");

}




