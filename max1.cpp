#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Max number = %d",a);
		}
		else
		{
			printf("Max number = %d",c);
		} 
	}
	else
	{
		if(b>c)
		{
			printf("Max number = %d",b);
		}
		else
		{
			printf("Max number = %d",c);
		}
	}
return 0;
}
