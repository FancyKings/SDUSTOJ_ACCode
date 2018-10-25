#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define MAX_SIZE 10000

int main()
{
    char s[MAX_SIZE];
    while(1)
    {
        gets(s);
        int flag=0,length=strlen(s);
        int i,head=0,tail=length-1;
        for(i=0;i<length;i++)
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
        for(i=length-1;i>=0;i--)
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
        if(s[head]=='E'&&s[head+1]=='N'&&s[head+2]=='D'&&tail-head==2)
        {
            printf("END\n");
            return 0;
        }
        for(i=head;i<=tail;i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1094
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

