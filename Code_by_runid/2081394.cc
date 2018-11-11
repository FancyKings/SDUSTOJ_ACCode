#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 200
char s[MAX];

int main()
{
    long long n;
    scanf("%lld",&n);
    while(n--)
    {
        int i;
        scanf("%s",&s);
        long long length=strlen(s),sum=0;
        for(i=0;i<length;i++)
            sum+=s[i]-'0';
//            printf("%d\n",sum);
        if(sum%3)
            printf("No\n");
        else
            printf("Yes\n");
    }
}

/**************************************************************
	Problem: 1187
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

