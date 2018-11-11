#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 510000
int pr[MAX];
int is(long long x)
{
    if(x==1||x==0)
    return 0;
    long long i,flag=1;
    for(i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
void prime(long long x,long long y)
{
    long long i,flag=0;
    for(i=x; i<=y; i++)
    {
        if(pr[i]==1)
        {
            long long j=2;
            for(j; j<=y; j++)
            {
                if(i*j>MAX)
                    break;
                else
                    pr[i*j]=0;
            }
        }
        else
        {
            if(is(i))
            {
                pr[i]=1;
            }
        }
    }
}

int main()
{
//    FILE *p;
//    p=fopen("test.txt","w");
    long long x,y;
    int one=0;
    while(~scanf("%lld %lld",&x,&y))
    {
//        if(one)
//        printf("\n");
        int point =0;
        prime(x,y);
        long long i;
        for(i=x;i<=y;i++)
        {
            if(pr[i]==1)
            {
                printf("%lld\n",i);
                point=1;
            }
        }
        if(!point)
        {
            printf("\n");
        }
        printf("\n");
        one=1;
    }
//    fclose(p);
    return 0;
}

/**************************************************************
	Problem: 1179
	User: 201701060705
	Language: C
	Result: Accepted
	Time:168 ms
	Memory:2752 kb
****************************************************************/

