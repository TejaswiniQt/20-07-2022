/******** C program to print the below pattern

  1
  2 3
  4 5 6 
  7 8 9 10
  11 12 13 14 15

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,k=1;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=i;j<=num;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
	return 0;
}

