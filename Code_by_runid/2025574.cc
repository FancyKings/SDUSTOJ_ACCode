#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            if(n%2==0)
            {
                int i,j;
                for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n-i;j++)
                        printf(" ");
                    for(j=1;j<=2*i-1;j++)
                    {
                        printf("+");
                    }
                    printf("\n");
                }
            }
            else
            {
                int i,j;
                for(i=n;i>=1;i--)
                {
                    for(j=1;j<=n-i;j++)
                        printf(" ");
                    for(j=1;j<=2*i-1;j++)
                    {
                        printf("+");
                    }
                    printf("\n");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1096
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

