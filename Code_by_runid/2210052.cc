#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int a[10000];
int issure[10000];
int prim[100000];
int isprim(int i)
{
    int j;
    if(i == 1|| i == 0)
        return 0;
    for(j=2; j<=sqrt(i); j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}

void setlist()
{
    //printf("%d\n",sqrt(2147483647));
    int k,now=0;
    for(k=0; k<100000; k++)
    {
        if(!prim[k])
        {
            if(isprim(k))
            {
                int t;
                prim[k] = 0;
                issure[now++] = k ;
                for(t=2; t*k<10000; t++)
                {
                    prim[t*k] = 1;
                }
            }
            else
            {
                prim[k] = 1;
            }
        }
    }
}

int main()
{
    //freopen("t.txt","w",stdout);
    setlist();
    int num;
    scanf("%d",&num);
    while(num--)
    {
        int x;
        scanf("%d",&x);
        if(x==1)
        {
            printf("1=1\n");
            continue;
        }
        if(x == 0)
        {
            printf("0=0\n");
            continue;
        }
        int save = 1, i = 0, now = x , j = 0;
        while(save!=x&&issure[i])
        {
            //printf("%d %d %d %d\n",i,save,now,issure[i]);
            if(now%issure[i]==0)
            {
                a[j++] = issure[i];
                save *= issure[i];
                now /= issure[i];
            }
            else
            {
                i++;
            }
        }
        if(save!=x)
            a[j++] = now;
        printf("%d=",x);
        printf("%d",a[0]);
        for(i=1; i<j; i++)
        {
            printf("*%d",a[i]);
        }
        printf("\n");
        memset(a,0,sizeof(a));
    }
    return 0;
}

/**************************************************************
	Problem: 1771
	User: 201701060705
	Language: C
	Result: Accepted
	Time:432 ms
	Memory:1228 kb
****************************************************************/

