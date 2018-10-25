#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"
int main(void)
{
    char s[28],l[28];
    gets(s);
    gets(l);
    if (strlen(l)>strlen(s))
        printf("%s\n%s\n",l,s);
    else printf("%s\n%s\n",s,l);
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

