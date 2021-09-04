#include<stdio.h>
int main()
{
	int num;
	int x=2;
	printf("Enter number : ");
	scanf("%d",&num);
	while(num!=1)
	{
		while(num % x == 0)
		{
			printf("%d ",x);
			num = num/x;
		}
		x++;
	}
	return 0;
}

