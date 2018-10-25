#include <stdio.h>
#include <string.h>
#define MAX 100000
int a[MAX],b[MAX];
int x=0,y=0;
int main()
{
    int x;
    scanf("%d",&x);
    int savex=x;
    if(x&1)
    {
        int cnta=0,cntb=0,i=0;
        x-=1;
        while(x)
        {
            int flag=0;
            while(~scanf("%d",&a[i++])&&a[i-1])
            {
                cnta++;
            }
            i=0;
            while(~scanf("%d",&b[i++])&&b[i-1])
            {
                cntb++;
            }
            int max=(cnta>cntb)?cnta:cntb;
            for(i=0; i<max; i++)
            {
                if(!flag)
                {
                    printf("%d",a[i]+b[i]);
                    flag++;
                }
                else
                    printf(" %d",a[i]+b[i]);
            }
            printf("\n");
            cnta=0;
            cntb=0;
            x-=2;i=0;
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
        }
        i=0;
        cnta=0;
        memset(a,0,sizeof(a));
        while(~scanf("%d",&a[i++])&&a[i-1])
        {
            cnta++;
        }
        int flag=0;
        for(i=0; i<cnta; i++)
        {
            if(flag)
            {
                printf(" %d",a[i]);
            }
            else
            {
                printf("%d",a[i]);
                flag++;
            }
        }
        printf("\n");
    }
    else
    {
        while(x)
        {
            int cnta=0,cntb=0,i=0,flag=0;
            while(~scanf("%d",&a[i++])&&a[i-1])
            {
                cnta++;
            }
            i=0;
            while(~scanf("%d",&b[i++])&&b[i-1])
            {
                cntb++;
            }
            int max=(cnta>cntb)?cnta:cntb;
            for(i=0; i<max; i++)
            {
                if(!flag)
                {
                    printf("%d",a[i]+b[i]);
                    flag++;
                }
                else
                    printf(" %d",a[i]+b[i]);
            }
            printf("\n");
            cnta=0;
            cntb=0;
            x-=2;i=0;
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1051
	User: 201701060705
	Language: C
	Result: Accepted
	Time:48 ms
	Memory:1528 kb
****************************************************************/

