#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    int ac[102]={0};
    int n=0;
    while(scanf("%d",&n)!=EOF)
    {
        memset(ac,0,102);
        int k=n;
        unsigned long long big=0,small=0;
        while(k--)
        {
            scanf("%d",&ac[k]);
        }
        int i=0;
        for(i=0;i<n;i++)
        {
            big=big+ac[i]+3;
        }
        printf("%llu",big);
        for(i=0;i<n;i++)
        {
            if(ac[i]>=3)
            {
                small+=ac[i]-3;
            }
            if(ac[i]==2)
                small+=1;
            if(ac[i]==1)
                small+=0;
            if(ac[i]==0)
                small+=1;
        }
        printf(" %llu\n",small);
    }
    return 0;
}

/**************************************************************
	Problem: 2142
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

