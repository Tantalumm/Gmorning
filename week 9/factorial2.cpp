#include<stdio.h>
int factorial(int n)
{
	if(n>1)
		return n * factorial(n-1);
	else
		return 1;
}
int main()
{
	int x;
	printf("Number Factorial : ");
	scanf("%d",&x);
	printf("Total : %d",factorial(x));
	return 0;
}
