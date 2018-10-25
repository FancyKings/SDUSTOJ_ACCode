#include <stdio.h>
#include <string.h>
#define MAX 10000
int a[MAX],b[MAX];
int x=0,y=0;
int main()
{
    int k=0,i,flag=0;
    while(~scanf("%d",&x))
    {
        k++;
        for(i=0; i<x; i++)
        {
            scanf("%d",&a[i]);
        }
        if(~scanf("%d",&y))
        {
            k+=1;
            for(i=0; i<y; i++)
                scanf("%d",&b[i]);
        }
        if(~k&1)
        {
            int max=(x>y)?x:y;
            flag=0;
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
            for(i=0; i<y; i++)
                a[i]=b[i];
            for(i=y; i<=max; i++)
                a[i]=0;
            memset(b,0,sizeof(b));
            x=y;
        }
        else
        {
            flag=0;
            for(i=0; i<x; i++)
            {
                if(!flag)
                {
                    printf("%d",a[i]);
                    flag++;
                }
                else
                    printf(" %d",a[i]);
            }
            printf("\n");
            return 0;
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1050
	User: 201701060705
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:824 kb
****************************************************************/

