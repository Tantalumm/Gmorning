
#include<stdio.h>
int main()
{
	int i = 0;
	int sum ;
	int s[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d",&s[i]);
		sum += s[i];	
	}
	while(i<10)
	{
		printf("%d ",s[i]);
		i++;
	}
	sum/=10;
	printf("\n");
	printf("AVG = %d\n",sum);
	
	return 0;
}
