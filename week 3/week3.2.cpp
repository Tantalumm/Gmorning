#include<stdio.h>
int main()
{
	int a,b,c,answer;
	scanf("%d %d %d",&a,&b,&c);
	//step 1
	if(a+b>a+c)
	{
		if(a+b>b+c)
		{
			answer=a+b;
			printf("%d",answer);
		}
		else
		{
			answer=b+c;
			printf("%d",answer);
		}
	}
	//step 2 
	if(a+c>a+b)
	{
		if(a+c > b+c)
		{
			answer=a+c;
			printf("%d",answer);
		}
		else
		{
			answer=b+c;
			printf("%d",answer);
		}
	}
	return 0;
}
