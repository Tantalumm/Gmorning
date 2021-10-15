#include <stdio.h>
#include <string.h>
int vowel(char w)
{
	switch(w)
	{
		case 'a' : {return 0;break;}
		case 'e' : {return 1;break;}
		case 'i' : {return 2;break;}
		case 'o' : {return 3;break;}
		case 'u' : {return 4;break;}
	}
}
int main()
	{
		int count[4]={0};
		char n[100],x;
		scanf("%s",&n);
		int len;
		len = strlen(n);
		//check a e i o u 
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
