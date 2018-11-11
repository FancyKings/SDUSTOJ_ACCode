#include<stdio.h>
int main()
{
    int q,w,e;
    scanf("%d %d %d",&q,&w,&e);
    int sum=0;
    if(q%2==0)
    {
        sum+=q;
    }
    else
    {
        sum+=q+1;
    }
    if(w%2==0)
    {
        sum+=w;
    }
    else
    {
        sum+=w+1;
    }if(e%2==0)
    {
        sum+=e;
    }
    else
    {
        sum+=e+1;
    }
    printf("%d",sum);
    return 0;
}

/**************************************************************
	Problem: 1402
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

