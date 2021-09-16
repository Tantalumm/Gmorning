#include<stdio.h>
int main()
{
	char str[50], *s;
	s = str;
	printf("Enter String : ");
	scanf("%s",&str);
	while(*s != '\0')
		s++;
		s--;
		printf("Last character : %c",*s);	
	return 0;
}
