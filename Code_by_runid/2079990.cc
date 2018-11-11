#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a[2000],temp[2000];
int main()
{
    int x,i=0,cnt=0,wave=0,flag=0;
    while(~scanf("%d",&x))
    {
        if(x>-1&&x<101)
        {
            a[i++]=x;
            cnt++;
        }
    }
    int e=0;
    for(i=0; i<cnt; i++)
    {
        if(a[i]>=90&&a[i]<=100)
        {
            e++;
            wave++;
        }
    }
    printf("Excellent : %d\n",e);
    e=0;
    for(i=0; i<cnt; i++)
    {
        if(a[i]>89){
            if(!flag)
            {
                printf("%d",a[i]);
                flag=1;
            }
            else
            {
                printf(", %d",a[i]);
            }}
    }
    flag=0;
    if(wave)
    printf("\n");wave=0;

    for(i=0; i<cnt; i++)
    {
        if(a[i]>=80&&a[i]<=89)
        {
            e++;
            wave++;
        }
    }

    printf("Good : %d\n",e);
    e=0;
    for(i=0; i<cnt; i++)
    {
        if(a[i]>=80&&a[i]<=89)
            if(!flag)
            {
                printf("%d",a[i]);
                flag=1;
            }
            else
            {
                printf(", %d",a[i]);
            }
    }
    flag=0;
    if(wave)
    printf("\n");
    wave=0;

    for(i=0; i<cnt; i++)
    {
        if(a[i]>=70&&a[i]<=79)
        {
            e++;wave++;
        }
    }

    printf("Average : %d\n",e);
    e=0;
    for(i=0; i<cnt; i++)
    {
        if(a[i]>=70&&a[i]<=79)
            if(!flag)
            {
                printf("%d",a[i]);
                flag=1;
            }
            else
            {
                printf(", %d",a[i]);
            }
    }
    flag=0;
    if(wave)
    printf("\n");
    wave=0;

    for(i=0; i<cnt; i++)
    {
        if(a[i]>=60&&a[i]<=69)
        {
            e++;wave++;
        }
    }

    printf("Pass : %d\n",e);
    e=0;
    for(i=0; i<cnt; i++)
    {
        if(a[i]>59&&a[i]<70)
            if(!flag)
            {
                printf("%d",a[i]);
                flag=1;
            }
            else
            {
                printf(", %d",a[i]);
            }
    }
    flag=0;
    if(wave)
    printf("\n");
    wave=0;

    for(i=0; i<cnt; i++)
    {
        if(a[i]>=0&&a[i]<=59)
        {
            e++;wave++;
        }
    }

    printf("Failing : %d\n",e);
    e=0;
    for(i=0; i<cnt; i++)
    {
        if(a[i]<60)
            if(!flag)
            {
                printf("%d",a[i]);
                flag=1;
            }
            else
            {
                printf(", %d",a[i]);
            }
    }
    if(wave)
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 1177
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:764 kb
****************************************************************/

