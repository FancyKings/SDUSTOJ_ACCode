#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 1000

char * trim(char *s)
{
    int flag=0,length=strlen(s);
    int i,head=0,tail=length-1;
    for(i=0; i<length; i++)
    {
        if(isspace(s[i]))
        {
            continue;
        }
        else
        {
            head=i;
            break;
        }
    }
    for(i=length-1; i>=0; i--)
    {
        if(isspace(s[i]))
        {
            continue;
        }
        else
        {
            tail=i;
            break;
        }
    }
    int cnt=0;
    char m[MAX_STR_LEN]={0};
    for(i=head; i<=tail; i++)
    {
        m[cnt++]=s[i];
    }
    char * t=m;
    return t;
}




int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
/**************************************************************
	Problem: 1229
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

