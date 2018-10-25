#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10000

char s[MAX];

int main()
{
    while(~scanf("%s",s))
    {
        long long length=strlen(s);
        long long i,sum=0,j=1,d=1;
        for(i=length-1;i>=0;i--)
        {
            if(s[i]-'0'==1){
                sum+=j;
            }
            j <<= 1;
//            printf("%lld %lld %lld %lld\n",i,j,d,sum);
        }
        printf("%lld\n",sum);
    }
}

/**************************************************************
	Problem: 1242
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

