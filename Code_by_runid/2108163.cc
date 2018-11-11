#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 1000
int str_cmp(char * s1,char * s2)
{
    int t;
    while (*s1!=0||*s2!=0)
    {
        char a=*s1,b=*s2;
        t=a-b;
//        if(t<0)t=-t;
        if(*s1==*s2)
        {
            s1++;s2++;
            continue;
        }
        else
            return t;
    }
    return 0;
}


int main()
{
    char str1[MAX_STR_LEN], str2[MAX_STR_LEN];
    while( (gets(str1) != NULL) && (gets(str2) != NULL) )
        printf("%d\n", str_cmp(str1, str2));
    return 0;
}
/**************************************************************
	Problem: 1138
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

