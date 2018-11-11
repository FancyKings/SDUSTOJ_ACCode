#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[100];
    while(~scanf("%s",s))
    {
        int i;
        scanf("%d",&i);
        if(i<=strlen(s)&&i>0)
        printf("%c\n",s[i-1]);
        else
            printf("error\n");
        memset(s,0,sizeof(s));
    }

return 0;

}

/**************************************************************
	Problem: 1253
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

