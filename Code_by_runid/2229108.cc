#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_STR_LEN 1000
int is(int y)
{
    if((y%4==0&&y%100!=0)||(y%400==0))
        return 1;
    else
        return 0;
}

int hou(int y,int m,int d)
{
    int sum=0;
    if(is(y))
    {
        int i;
        for(i=m+1; i<=12; i++)
        {
            if(i==2)
                sum+=29;
            else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                sum+=31;
            else
                sum+=30;
        }
        if(m==2)
            sum+=29-d;
        else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            sum+=31-d;
        else
            sum+=30-d;
        return sum;
    }
    else
    {
        int i;
        for(i=m+1; i<=12; i++)
        {
            if(i==2)
                sum+=28;
            else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                sum+=31;
            else
                sum+=30;
        }
        if(m==2)
            sum+=28-d;
        else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            sum+=31-d;
        else
            sum+=30-d;
        return sum;
    }
}

int qian(int y,int m,int d)
{
    int sum=0;
    if(is(y))
    {
        int i;
        for(i=1; i<m; i++)
        {
            if(i==2)
                sum+=29;
            else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                sum+=31;
            else
                sum+=30;
        }
        sum+=d;
        return sum;
    }
    else
    {
        int i;
        for(i=1; i<m; i++)
        {
            if(i==2)
                sum+=28;
            else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                sum+=31;
            else
                sum+=30;
        }
        sum+=d;
        return sum;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long sum=0;
        int y,m,d;
        scanf("%d-%d-%d",&y,&m,&d);
        if(is(y)&&m==2&&d==29&&!is(y+18))
        {
            printf("-1\n");
        }
        else
        {
            int i=y+1;
            for(; i<y+18; i++)
            {
                if(is(i))
                    sum+=366;
                else
                    sum+=365;
            }
            sum+=hou(y,m,d);
            sum+=qian(y+18,m,d);
            printf("%lld\n",sum);
            sum=0;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1310
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

