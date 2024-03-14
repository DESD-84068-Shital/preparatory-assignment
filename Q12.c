//program to reverse the string.

#include<stdio.h>
int main()
{
 int name[10]={'s','h','i','t','a','l','\0'};
 int i;
 printf("string is:");
 for(i=0;i<10;i++)
  {
    printf("%c",name[i]);
  }
 
 printf("\nreverse string:");

 for(i=10;i>=0;i--)
  {
    printf("%c",name[i]);
  }



}
