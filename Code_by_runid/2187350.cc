#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>
#define MAX_STR_LEN 100100
char temp[MAX_STR_LEN];
char * s[50010];
void srtmart(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(s[j],s[j+1])>0)
            {
                char * t;
                t=s[j],s[j]=s[j+1],s[j+1]=t;
            }
        }
    }
}

//int cmp(const void * a,const void * b)
//{
//    return (strcmp(a,b));
//}
int main()
{
    //freopen("t.txt","w",stdout);
    int num;
    while(~scanf("%d",&num))
    {
        getchar();
        int i;
        for(i=0;i<num;i++)
        {
            gets(temp);
            int length=strlen(temp);
            char * p=(char *)calloc(length+2,sizeof(char));
            strcpy(p,temp);
            s[i]=p;
//            puts(s[i]);
//            free(p);
            memset(temp,0,sizeof(temp));
        }
        srtmart(num);
        for(i=0;i<num;i++)
            puts(s[i]);
        for(i=0;i<num;i++)
            free(s[i]);
    }
    return 0;
}

/**************************************************************
	Problem: 1334
	User: 201701060705
	Language: C
	Result: Accepted
	Time:6116 ms
	Memory:1624 kb
****************************************************************/

