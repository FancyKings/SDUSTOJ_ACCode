#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long x,y;
        scanf("%lld %lld",&x,&y);
        int flag=0;
        if(x==y)
            printf("%lld\n",x);
        if(x>y)
        {
            long long i;
            for(i=y;i<=x;i++)
            {
                if(!flag)
                {
                    printf("%lld",i);
                    flag=1;
                }
                else
                {
                    printf(" %lld",i);
                }
            }
            printf("\n");
        }
        if(x<y)
        {
            long long i;
            for(i=x;i<=y;i++)
            {
                if(!flag)
                {
                    printf("%lld",i);
                    flag=1;
                }
                else
                {
                    printf(" %lld",i);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


/**************************************************************
	Problem: 1168
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

