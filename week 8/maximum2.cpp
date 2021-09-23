#include<stdio.h>
int max(int x,int y)
{
	return(x>y)?x:y;
}
int main()
{
	int a,b,maximum;
	scanf("%d %d",&a,&b);
	maximum=max(a,b);
	printf("%d",maximum);
	return 0;
}
