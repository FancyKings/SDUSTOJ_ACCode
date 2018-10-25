#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1000010
long long a[M];

long long cnt(long long n)
{
    int tmp=n;
    int cnt=1;
    if(a[n]){
            cnt+=a[n];
//        printf("\n%d###%d\n",tmp,cnt);
        }
    else{
        while(n!=1)
        {
            if(~n&1) n>>=1;
            else n+=(n << 1)+1;
            cnt++;
        }
//        printf("\n%d!!!%d\n",tmp,cnt);
        a[tmp]=cnt;
    }
    return cnt-1;
}

int main()
{
    long long i,j,t;
    while(~scanf("%lld %lld",&i,&j))
    {
        printf("%lld %lld ",i,j);
        if(i>j)
        {
            int temp;
            temp=i;
            i=j;
            j=temp;
        }
        int ans=0;
        for(t=i; t<=j; t++)
        {
            if (cnt(t)>ans) ans=cnt(t);
        }
        printf("%d\n",ans);
    }
    return 0;
}

/**************************************************************
	Problem: 1049
	User: 201701060705
	Language: C
	Result: Accepted
	Time:320 ms
	Memory:8560 kb
****************************************************************/

