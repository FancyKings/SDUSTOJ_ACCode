#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10000
char s[MAX],all[MAX];
int main()
{
    char ch;
    int i = 0,j = 0,flag = 0,count = 0;
    while ((ch = getchar()) != EOF)
    {
        if(flag == 1 && (ch > 'Z' || ch < 'A') && ch != ' ')
        {
            flag = 0;
            i = 0;
        }
        if (flag == 2 && ch != '(')
        {
            flag = 0;
            i = 0;
        }
        if (flag == 0 && ch>='A'&&ch<='Z')
        {
            s[i++] = ch;
            flag = 1;
            continue;
        }
        if (flag == 1 && ch>='A'&&ch<='Z')
        {
            s[i++] = ch;
        }

        if (flag == 1 && ch == ' ')
        {
            s[i] = '\0';
            flag = 2;
        }
        if(flag == 2 && ch == '(')
        {
            flag = 3;
            continue;
        }
        if (flag == 3 && ch != ')')
        {
            all[j++] = ch;
        }
        if (flag == 3 && ch == ')')
        {
            all[j] = '\0';
            count++;
            if (count == 1)
            {
                printf("Abbreviation ==> Full Name\n");
            }
            if (count >= 1 && count < 10)
            {
                printf("%d:%10s ==> %s\n",count,s,all);
            }
            else if(count >= 10)
            {
                printf("%d:%9s ==> %s\n",count,s,all);
            }
            memset(s,0,sizeof(s));
            memset(all,0,sizeof(all));
            flag=0;i=0;j=0;
        }
    }
    if(count == 0)
    {
        printf("There is no abbreviations in this text.\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1063
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:768 kb
****************************************************************/

