#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char cnvchar(char c)
{
    if(c>='a'&&c<='z')
        c-=32;
    else
        c+=32;
    return c;
}


int main()
{
    char ch;
    ch = getchar();
    ch = cnvchar(ch);
    putchar(ch);
    return 0;
}
/**************************************************************
	Problem: 2046
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

