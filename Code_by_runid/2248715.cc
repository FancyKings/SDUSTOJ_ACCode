#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 10000000

int main()
{
    //freopen("t.txt","w",stdout);
    int n;
    while(~scanf("%d",&n))
    {
        int i=0;
        for(; i<n-1; i++)
        {
            int js=n;
            int space=0;
            for(space=0; space<n-i-1; space++)
                printf(" ");
            int j;
            for(j=0; j<i; j++)
            {
                printf("%d",--n);
            }
            printf("1");
            for(j=0; j<i; j++)
            {
                printf("%d",n++);
            }
            for(space=0; space<n-i-1; space++)
                printf(" ");
            printf("\n");
        }
        for(i=0; i<2*n-1; i++)
            printf("1");
        printf("\n");
        for(i=n-2; i>=0; i--)
        {
            int js=n;
            int space=0;
            for(space=0; space<n-i-1; space++)
                printf(" ");
            int j;
            for(j=0; j<i; j++)
            {
                printf("%d",--n);
            }
            printf("1");
            for(j=0; j<i; j++)
            {
                printf("%d",n++);
            }
            for(space=0; space<n-i-1; space++)
                printf(" ");
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1792
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

