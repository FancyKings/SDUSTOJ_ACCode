#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define MAX_SIZE 1000
int a[MAX_SIZE];
int isp(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

//int prime()
//{
//    int i;
//    for(i=0)
//}

int main()
{
    int num;
    while(~scanf("%d",&num))
    {
        int i,j,sum = 0;
        for(i=2;i<=num/2;i++)
        {
            for(j=i;j<num;j++)
            {
                if(isp(i)&&isp(j)&&i+j==num)
                {
                    printf("%d + %d = %d\n",i,j,num);
                }
            }
        }

    }
    return 0;
}

/**************************************************************
	Problem: 1456
	User: 201701060705
	Language: C
	Result: Accepted
	Time:1972 ms
	Memory:760 kb
****************************************************************/

