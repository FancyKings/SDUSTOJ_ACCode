#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,s,d,t;
    scanf("start = %d, step = %d, times = %d",&s,&d,&t);
    int flag=1;
    for(i=0;i<t;i++)
    {
        if(flag)
        {
            printf("%d",s);
            flag=0;
        }
        else
        {
            printf(" %d",s+(i)*d);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1090
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

