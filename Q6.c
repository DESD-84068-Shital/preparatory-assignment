//program on matrix multiplication

#include<stdio.h>
int main()
{
 int arr1[2][2],arr2[2][2],arr3[2][2],i,j,k,sum=0;
 printf("Enter the elements of first matrix:\n");
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    { 
      scanf("%d",&arr1[i][j]);
    }
  }

 printf("elements of first array:\n");
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    {
     printf("%d ",arr1[i][j]);
	}
  }

printf("enter the elements of second array:\n");
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    { 
      scanf("%d",&arr2[i][j]);
    }
  }

 printf("elements of second array:\n");
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    {
     printf("%d ",arr2[i][j]);
	}
  }

printf("The multiplication of two matrix:\n");
for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    arr3[i][j]=0;
	for(k=0;k<2;k++)
	{
     arr3[i][j]+=(arr1[i][k]*arr2[k][j]);
	}
   }
  printf("\n");
 }

for(i=0;i<2;i++)
{
 for(j=0;j<2;j++)
 {
  printf("%d",arr3[i][j]);
 }
printf("\n");
}

}

