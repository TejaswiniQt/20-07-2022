/******** C program to print the below pattern

  5
  4 5
  3 4 5 
  2 3 4 5 
  1 2 3 4 5

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--)
	{
		for(j=i;j<=num;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}

