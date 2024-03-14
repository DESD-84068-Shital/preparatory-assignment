//calculate the grade of a students depends on 5 subject marks.

#include<stdio.h>
int main()
{
 int marks,total_marks=0;
 printf("Enter the marks of 5 subjects:\n");
 for(int i=0;i<5;i++)
  {
   scanf("%d",&marks);
   if(marks>20)
   {
    return 0;
   }
  }

 for(int i=0;i<5;i++)
  {
    total_marks+=marks;
  }
printf("\ntotal_marks=%d",total_marks);

if(total_marks>=90)
 printf("Grade:EX");

else if(total_marks<90 && total_marks>=80)
 printf("Grade:A");

else if(total_marks<80 && total_marks>=70)
  printf("Grade:B");

else if(total_marks<70 && total_marks>=60)
  printf("Grade:C");

else
  printf("Fail");

}








