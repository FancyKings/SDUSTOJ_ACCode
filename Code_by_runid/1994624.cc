#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i = 0, n = 0;
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        int k = n - i;
        for (k; k > 0; k--)
        {
            printf(" ");
        }
        for (k = 2*i-1; k > 0; k--)
        {
            printf("+");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1164
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

