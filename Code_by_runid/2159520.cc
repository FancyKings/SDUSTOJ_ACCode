#include <stdio.h>
#define MAX_STR_LEN 1000

char * str_cat(char * t, char * s)
{
    char *tt=t,*ss=s;
    int i,j;
    for(i=0;tt[i];i++);
    for(j=0;ss[j];j++)
        tt[i++]=ss[j];
    tt[i]=0;
    return tt;
}


int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1213
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

