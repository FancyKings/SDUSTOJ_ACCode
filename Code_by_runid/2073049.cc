#include<stdio.h>

long long Monkey(long long y,int n)
{
    if(n==1)
        return y;
    else
    {
//        printf("%lld\n",y);
        return Monkey(2*(y+1),n-1);
    }

}

#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%lld\n",Monkey(1,n));
    }
    return 0;
}
/**************************************************************
	Problem: 2176
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

