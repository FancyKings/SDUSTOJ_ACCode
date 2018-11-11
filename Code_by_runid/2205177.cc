#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
char s[1000];
int main()
{
    int sum=0;
    gets(s);
    memset(s,0,sizeof(s));
    while(~scanf("%s",s))
    {
        int len=strlen(s),i,power=1,now=0;
        for(i=len-1;i>0;i--)
        {
            now+=(s[i]-'0')*power;
            power*=10;
        }
        if(isdigit(s[0]))
        {
            now+=(s[0]-'0')*power;
        }
        else
        {
            if(s[0]=='-')
                now*=-1;
        }
        sum+=now;
        memset(s,0,sizeof(s));
    }
    if(sum<0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

/**************************************************************
	Problem: 2044
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

