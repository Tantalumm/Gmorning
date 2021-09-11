#include<stdio.h>
int main()
{
	int s[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d",&s[i]);	
	}
	int sum=0;
	for(int i=0; i<10; i++)
	{
		printf("%d ",s[i]);
		sum += s[i];
		
	} 
	sum/=10;
	printf("\n");
	printf("AVG = %d\n",sum);
	
	return 0;
}
