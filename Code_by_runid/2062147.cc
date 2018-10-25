#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int swap(int *a,int *b)
{
    int i;
    i=*a;
    *a=*b;
    *b=i;
}

int main()
{
    int n,j=0,i=0;
    while(~scanf("%d",&n))
    {
        int year[200]= {0},month[200]= {0},day[200]= {0};
        for(i=0; i<n; i++)
            scanf("%d-%d-%d",&year[i],&month[i],&day[i]);
//        printf("\n");
//    for(i=0;i<n;i++)
//        printf("%d-%d-%d\n",year[i],month[i],day[i]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1-i; j++)
            {
                if(year[j]>year[j+1])
                {
                    swap(&year[j],&year[j+1]);
                    swap(&month[j],&month[j+1]);
                    swap(&day[j],&day[j+1]);
                }
            }
        }
//        for(i=0; i<n; i++)
//            printf("%d-%d-%d\n",year[i],month[i],day[i]);
//        printf("\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(year[j]==year[j+1]&&month[j]>month[j+1])
                {
                    swap(&month[j],&month[j+1]);
                    swap(&day[j],&day[j+1]);
                }
            }
        }
//        for(i=0; i<n; i++)
//            printf("%d-%d-%d\n",year[i],month[i],day[i]);
//        printf("\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(year[j]==year[j+1]&&month[j]==month[j+1]&&day[j]>day[j+1])
                {
                    swap(&day[j],&day[j+1]);
                }
            }
        }
//        for(i=0; i<n; i++)
//            printf("%d-%d-%d\n",year[i],month[i],day[i]);
        printf("%04d-%02d-%02d\n",year[1],month[1],day[1]);
    }
    return 0;
}

/**************************************************************
	Problem: 2153
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

