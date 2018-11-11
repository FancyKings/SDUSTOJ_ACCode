#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define P 3.14159
char ac[1000],te[1000];
int timenow = 0;
int main()
{
    scanf("%s",ac);
    int i;
    for(i=0;ac[i]!=0;i++)
    {
        if(ac[i]>='a'&&ac[i]<='z')
            ac[i]-=32;
    }
    while(~scanf("%s",te))
    {
        if(timenow>=5)
            printf("Out of limited!\n");
        else
        {
            for(i=0;te[i]!=0;i++)
            {
                if(te[i]>='a'&&te[i]<='z')
                    te[i]-=32;
            }
            if(strcmp(ac,te)==0)
            {
                printf("Welcome!\n");

                return 0;
            }
            else
            {
                printf("Wrong!\n");
                timenow++;
            }
        }
        memset(te,0,sizeof(te));
    }
    return 0;
}

/**************************************************************
	Problem: 1766
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

