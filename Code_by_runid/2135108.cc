#include <stdio.h>
#include <ctype.h>
long long outa;
long long gcd(long long m,long long n)
{
    if(!(m%n))
    {
        return n;
    }
    else
        gcd(n,(m%n));
}
long long lcm(long long m,long long n)
{
    outa=gcd(m,n);
    return (m*n)/outa;
}
int main()
{
    long long a,b;
    scanf("%lld",&a);
    scanf("%lld",&b);
    if(a>b)
    {
        long long t=a;
        a=b;
        b=t;
    }
    printf("%lld %lld\n",outa,lcm(a,b));
    return 0;
}

/**************************************************************
	Problem: 1298
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

