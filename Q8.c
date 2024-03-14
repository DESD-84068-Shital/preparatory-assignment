//program on structure.

#include<stdio.h>
struct student{
 char student_name[20];
 int roll_no;
 float marks;
};
int main()
{
 printf("enter the details of students:\n");
 struct student s;
 scanf("%s",&s.student_name);
 scanf("%d",&s.roll_no);
 scanf("%f",&s.marks);

 printf("name:%s\n roll_no=%d\n marks=%.2f",s.student_name,s.roll_no,s.marks);





}
