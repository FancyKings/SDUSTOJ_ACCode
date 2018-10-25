#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int CASE = 0;
int issure[500100];
int prim[7500000];
int isprim(long long i)
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
    long long k,now=0;
    for(k=2; k<7368790; k++)
    {
        if(now>=500000)
            break;
        if(!prim[k])
        {
            issure[now++] = k ;
        }
        int j;
        for(j=0; k*issure[j]<=7368790; j++)
        {
            prim[k*issure[j]] = 1;
            if(k%issure[j]==0)
                break;
        }
    }
}


int main()
{
    //freopen("t.txt","w",stdout);
    setlist();
    int a,b;
    while(~scanf("%d %d",&a,&b))
    {
        if(CASE++)
            printf("\n");
        if (a>b)
        {
            int t=a;
            a=b;
            b=t;
        }
        int num = 0;
        long long i;
        for(i=a-1; i<b; i++)
        {
            if(num==10)
            {
                printf("\n");
                i-=1;
                num=0;
            }
            else
            {
                if(num==0)
                    printf("%d",issure[i]);
                else
                    printf(" %d",issure[i]);
                num++;
            }
            if(issure[i]==0)
            {
                printf("------%d\n",i);
                return 0;
            }
        }
//        if(num!=10)
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1597
	User: 201701060705
	Language: C
	Result: Accepted
	Time:828 ms
	Memory:32008 kb
****************************************************************/

