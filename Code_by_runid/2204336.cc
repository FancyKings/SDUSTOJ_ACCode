#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
char s[100000];

int main()
{
    while(gets(s)!=NULL)
    {
        int len=strlen(s),i=0,sig=1,power=1;
        long long sum=0,temp=0;
        for(i=len-1;i>=0;i--)
        {
            if(isdigit(s[i]))
            {
                temp+=(s[i]-'0')*power;
                power*=10;
            }
            else if(s[i]=='-')
            {
                sum-=temp;
                temp=0;
                power=1;
            }
            else if(s[i]=='+')
            {
                sum+=temp;
                temp=0;
                power=1;
            }
            if(i==0&&isdigit(s[i]))
            {
                sum+=temp;
                temp=0;
            }
        }
        printf("%lld\n",sum);
        memset(s,0,sizeof(s));
    }
    return 0;
}

/**************************************************************
	Problem: 2037
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:844 kb
****************************************************************/

