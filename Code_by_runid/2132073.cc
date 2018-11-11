#include<stdio.h>
#define MAX_STR_LEN 1000

char * str_cpy(char * t, char * s)
{
    int i,j=0;
    for(i=0;s[i]!='\0';i++)
    {
        t[j++]=s[i];
    }
    t[j]='\0';
    return t;
}


int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL)
    {
        p = str_cpy(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}
/**************************************************************
	Problem: 1215
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

