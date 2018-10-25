#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[1111];
    int x,y;
    int flag1,flag2;
    while (gets(s) != NULL)
    {
        flag1 = 0;
        flag2 = 0;
        y = strlen(s);
        for (x = 0; x < y; x++)
        {
            if(isalpha(s[x]) && flag2 == 0)
            {
                flag1++;
                flag2 = 1;
            }
            if (isalpha(s[x]) && flag2 != 0)
                continue;
            if (!isalpha(s[x]))
                {
                    flag2 = 0;
                    continue;
                }
        }
        printf("%d",flag1);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1169
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

