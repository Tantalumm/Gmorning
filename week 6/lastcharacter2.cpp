#include<stdio.h>
int main()
{
	char str[50], *s;
	s = str;
	printf("Enter String : ");
	scanf("%s",&str);
	while(*s != '\0' )
	{
		s++;
		if(*s == '\0')
		{
			printf("Last character : %c",*(s-1));
		}
	}
	return 0;
}
