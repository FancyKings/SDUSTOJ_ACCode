#include<stdio.h>

int gcd(int a,int b)
{
    if(a==0&&b!=0)
        return b;
    if(b==0&&a!=0)
        return a;
    if(a!=0&&b!=0)
    {
        if(a<b)
        {
            int temp=a;
            a=b;b=temp;
        }
        int cmp=-1;
        while((a%b)!=0)
        {
            cmp=a%b;
            a=b;
            b=cmp;
        }
        return b;
    }
}

#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
/**************************************************************
	Problem: 2175
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

