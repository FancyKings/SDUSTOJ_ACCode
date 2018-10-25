#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define P 3.14159
char s[100000];
int main()
{
    int num;
    scanf("%d",&num);
    while(num--)
    {
        scanf("%s",s);
        int len=strlen(s);
        int i;
        for(i=0; i<len%3; i++)
            printf("%c",s[i]);
        if(len>3&&i)
            printf(",");
        int cnt = 0;
        for(; i<len; i++)
        {
            printf("%c",s[i]);
            cnt++;
            if(cnt==3&&len-i>1){
                printf(",");
                cnt = 0;
            }
        }
        printf("\n");
        memset(s,0,sizeof(s));
    }
    return 0;
}

/**************************************************************
	Problem: 1765
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:844 kb
****************************************************************/

