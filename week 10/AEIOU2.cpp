#include <stdio.h>
#include <string.h>

int vowel(char w)
{
		if(w=='a')
		return 0;
		else if(w=='e')
		return 1;
		else if(w=='i')
		return 2;
		else if(w=='o')
		return 3;
		else if(w=='u')
		return 4;
}
int main () 
{
	int count[4]={0};
	char n[100],x;
	int a,e,i,o,u;
	scanf("%s",&n);
	int len;
	len = strlen(n);
	// check a e i o u
	for(int i = 0; i<len; i++)
		{
			x = vowel(n[i]);
			count[x] += 1;
		}
		printf("a : %d\n",count[0]);
		printf("e : %d\n",count[1]);
		printf("i : %d\n",count[2]);
		printf("o : %d\n",count[3]);
		printf("u : %d\n",count[4]);
}
