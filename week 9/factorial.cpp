#include<stdio.h>
void factorial(int *n,int *sum)
{
		*n;
		*sum = 1 ;
		for(int i=1; i<=*n ;i++)
		{
			*sum *= i;
		}
		
}
int main()
	{
		int n,sum;
		printf("Number Factorial : ");
		scanf("%d",&n);
		factorial(&n,&sum);
		printf("Total : %d",sum);
		return 0;
	}
