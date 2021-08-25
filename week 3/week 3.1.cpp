#include<stdio.h>
int main()
{
	int a,b,c,answer;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>a+c && a+b>b+c)
	{
		printf("%d",answer=a+b);
	}
	else if(a+c>a+b && a+c>b+c)
	{
		printf("%d",answer=a+c);
	}
	else if(b+c>a+b && b+c>a+c)
	{
		printf("%d",answer=b+c);
	}
	return 0;
}
