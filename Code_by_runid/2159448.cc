#include <stdio.h>
#define MAX_STR_LEN 1000
char * str_cpy(char * t, char * s, int n)
{
    char *tt = t,*ss=s;
    int i=0;
    for(;i<n;i++)
    {
        if(ss[i]=='\0')
            break;
        tt[i]=ss[i];
    }
    tt[i]='\0';
    return tt;
}


int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        p = str_cpy(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1216
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

