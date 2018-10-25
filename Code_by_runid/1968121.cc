#include<stdio.h>
#include<string.h>
int main()
{
    char l[100],e[100];

    gets(l);
    gets(e);
    if(strlen(l)>=strlen(e))
    {
        printf("%s\n%s",l,e);
    }
    else
    {
        printf("%s\n%s",e,l);
    }
    return 0;
}

/**************************************************************
	Problem: 1017
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

