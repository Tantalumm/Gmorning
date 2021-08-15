#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter first number  : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		max=a;
	}
	else if(b>a && b>c)
	{
		max=b;
	}
	else if(c>a && c>b)
	{
		max=c;
	}
	printf("Max = %d",max);
	return 0;
}
