#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN 1000

char * str_rev(char * t, char * s)
{
    int i,j=0,len=strlen(s);
    for(i=len-1;i>=0;i--)
    {
        t[j++]=s[i];
    }
    return t;
}


int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}
/**************************************************************
	Problem: 1235
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

