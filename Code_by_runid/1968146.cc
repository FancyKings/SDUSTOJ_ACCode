#include<stdio.h>
int main()
{
    long long k=0,i=0;
    int m=0,n=0,a=0;
    scanf("%lld %d %d",&k,&m,&n);
    for(i=1;i<=k;i++)
    {
        if(i%m==0||i%n==0)
        {
            if(i%m==0&&i%n==0)
            {
                continue;
            }
            else
            {
                a+=1;
                if(a==1)
                {
                    printf("%lld",i);
                }
                else
                {
                    printf(" %lld",i);
                }
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1019
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

