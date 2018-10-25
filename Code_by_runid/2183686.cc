#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 1000
char * str_cat(char * t, char * s, int n)
{
    char *tt=t,*ss=s;
    int len;
    for(len=0;ss[len]!=0;len++);
    if(len<n)
        n=len;
    int i;int j;
    for(j=0;tt[j]!=0;j++);
    for(i=0;i<n;i++)
    {
        tt[j+i]=ss[i];
    }
    tt[j+i]=0;
    return tt;
}



int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        gets(str);
        p = str_cat(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1214
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

