#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char s[2000];
int findnxt(int i,int length)
{
    int j=i,flag=0;
    for(;j<length;j++)
    {
        if(isspace(s[j])||ispunct(s[j]))
        {
            flag=1;
            break;
        }
    }
    if(flag)
        return j;
    else
        return length;
}
int main()
{
    while(gets(s)!=NULL)
    {
        int sum=0;
        int length=strlen(s),i;
        for(i=0;i<length;i++)
        {
            if((isspace(s[i])==0)&&(ispunct(s[i])==0))
            {
//                printf("%c %d\n",s[i],i);
                sum+=1;
                i=findnxt(i,length);
            }
        }
        printf("%d\n",sum);
        memset(s,0,sizeof(s));
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

