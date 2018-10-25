#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100000
char s[MAX];
long long search_sp(char s[],long long now)
{
    long long length=strlen(s),i=now+1,back=length-1;
    for(;i<length;i++)
    {
        char c=s[i];
        if(!isalpha(c))
        {
            back=i;
            break;
        }
    }
    return back;
}

int main()
{
    while(gets(s)!=NULL)
    {
        long long i,length=strlen(s),num=0;
        for(i=0;i<length;i++)
        {
            char c=s[i];
            if(isalpha(c))
            {
                num++;
                i=search_sp(s,i);
                continue;
            }
        }
        printf("%lld\n",num);
    }
    return 0;
}

/**************************************************************
	Problem: 1169
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:844 kb
****************************************************************/

