#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 10000
double a[MAX_SIZE];
int main()
{
    int num;
    while(scanf("%d",&num)&&num)
    {
        int i,j;
        for(i=0;i<num;i++)
        {
            scanf("%lf",&a[i]);
        }
        for(i=0;i<num;i++)
        {
            for(j=0;j<num-i-1;j++)
            {
                if(a[j]<a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
//        printf("\n");
//        for(i=0;i<num;i++)
//            printf("%lg ",a[i]);
        if(num&1)
        {
            printf("%lg\n",a[num/2]);
        }
        else
        {
            double x;
            x=(a[num/2]+a[num/2-1])/2.0;
            printf("%lg\n",x);
        }
        memset(a,0,sizeof(a));
    }
    return 0;
}

/**************************************************************
	Problem: 1508
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:824 kb
****************************************************************/

