#include<stdio.h>
void maximum(int x ,int y )
{
	if (x>y)
	{
		printf("Max : %d",x);
	}
	else
	{
		printf("Max : %d",y);
	}
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	maximum(a,b);
	return 0;
}
