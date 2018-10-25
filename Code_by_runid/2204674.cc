#include <stdio.h>
#include <string.h>
#include <ctype.h>
double a[1000];
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        int num;
        scanf("%d",&num);
        int t=0;
        for(;t<num;t++)
            scanf("%lf",&a[t]);
        int i,j;
        for(i=0;i<num;i++)
        {
            for(j=0;j<num-1-i;j++)
            {
                int x=a[j],y=a[j+1];
                if(x>y)
                {
                    double d=a[j],b=a[j+1];
                    a[j]=b;
                    a[j+1]=d;
                }
            }
        }
        printf("%.1lf",a[0]);
        for(i=1;i<num;i++)
            printf(" %.1lf",a[i]);
        printf("\n");
        memset(a,0,sizeof(a));
    }
    return 0;
}

/**************************************************************
	Problem: 2045
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

