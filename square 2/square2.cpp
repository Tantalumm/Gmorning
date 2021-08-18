#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
    int M = n, N = n;
    int i = 1;
    while (i < M) {
        int j = 0;
        while (j < N) {
            if (i + j) {
                printf("*");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
