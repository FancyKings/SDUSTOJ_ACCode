#include <stdio.h>
#include <string.h>
#define MAX 100000
int a[MAX],b[MAX];
int x=0,y=0;
int main()
{
    int num;
    scanf("%d",&num);
    {
        int i=0;
        scanf("%d",&x);
        int savex=x;
        while(savex--)
            scanf("%d",&a[i++]);
        if(num==1)
        {
            int flag=0;
            for(i=0; i<x; i++)
            {
                if(flag)
                    printf(" %d",a[i]+b[i]);
                else
                {
                    printf("%d",a[i]+b[i]);
                    flag++;
                }
            }
            printf("\n");
        }
        else
        {
            num-=1;
            while(num)
            {
                int flag=0;
                scanf("%d",&y);
                i=0;
                int savey=y;
                while(savey--)
                    scanf("%d",&b[i++]);
                int max=(x>y)?x:y;
                for(i=0; i<max; i++)
                {
                    if(flag)
                        printf(" %d",a[i]+b[i]);
                    else
                    {
                        printf("%d",a[i]+b[i]);
                        flag++;
                    }
                }
                printf("\n");
                num-=1;
                for(i=0; i<y; i++)
                    a[i]=b[i];
                for(i=y; i<=max; i++)
                    a[i]=0;
                memset(b,0,sizeof(b));
                x=y;
            }
            int flag=0;
            for(i=0; i<y; i++)
            {
                if(flag)
                    printf(" %d",a[i]);
                else
                {
                    printf("%d",a[i]);
                    flag++;
                }
            }
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1052
	User: 201701060705
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:1528 kb
****************************************************************/

