//Write a C program to print the sum of all the even elements and even position elements
//in an array.
#include <stdio.h>
void main()
{
	int a[5],i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
		if (i%2==0)
		{
			sum=sum+a[i];
		}
		else if (a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	printf("Sum of all the even elements in the array : %d",sum);
}