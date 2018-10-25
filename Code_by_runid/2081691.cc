#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char s[2000];
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int Case=1;
//    gets(s);
//    printf("case %d:length=%d.\n",Case++,strlen(s));
//    n-=1;
    while(n--)
    {
        gets(s);
        printf("case %d:length=%d.\n",Case++,strlen(s));
    }
    return 0;
}

/**************************************************************
	Problem: 1149
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

