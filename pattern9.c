/******** C program to print the below pattern

  1
  4 9
  16 25 36 
  49 64 81 100
  121 144 169 196 225

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
			printf("%d ",k*k);
                        k++;
		}
		printf("\n");
	}
	return 0;
}

