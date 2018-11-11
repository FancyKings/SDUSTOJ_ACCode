#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[20000];
int main()
{
    while(gets(s)!=NULL)
    {
        int len=strlen(s);
        int i=s[len-1]-'0';
        if(i&1)
            printf("Odd\n");
        else
            printf("Even\n");
        memset(s,0,sizeof(s));
    }
    return 0;
}

/**************************************************************
	Problem: 2036
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:768 kb
****************************************************************/

