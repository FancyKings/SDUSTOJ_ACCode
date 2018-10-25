#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char s[10000];
int main()
{
//    freopen("t.txt","w",stdout);
    int num;
    scanf("%d",&num);
    while(num--)
    {
        int cnt = 0;
        scanf("%d", &cnt);
        getchar();
        while(cnt--)
        {
            gets(s);
            printf("%c",s[0]);
            memset(s,0,sizeof(s));
        }
        printf("\n");
    }
	return 0;
}

/**************************************************************
	Problem: 1653
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

