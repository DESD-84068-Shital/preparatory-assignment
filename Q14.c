//program to check string is palindrome.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int i,j;
 char string[10];
 scanf("%s",&string);
 int length=strlen(string);
 printf("\n length of string is=%d",length);
length=length-1;
 int k=0;

 while(length>k)
 {
  
   if(string[length]!=string[k])
   {
     printf("\n not a palindrome");
	 return 0;
   }
 length--;
 k++;
}

printf("\n%s is palindrome",string);
}
