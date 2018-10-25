#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 1000
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        n/=2;
        int i ,j;
        for(i=-n;i<=n;i++)
        {
            for(j=-n;j<=n;j++)
            {
                if(abs(j)+abs(i)==n)
                    printf("*");
                else if(abs(i)+j<n)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1170
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

