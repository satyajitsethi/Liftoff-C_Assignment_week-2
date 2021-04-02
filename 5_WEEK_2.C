#include <stdio.h>
void main()
{
	int a=1,b=5,i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if (j==a | j==b)
			{
				printf("* ");
			}
			//else if (j==b)
			//{
			//	printf("*\t");
			//}
			else
			{
				printf("  ");
			}
		}
		a=a+1;
		b=b-1;
		printf("\n");
	}
	
}