#include <stdio.h>
#include <ctype.h>
#define MAX_STR_LEN 10000
#define n numerator
#define d denominator
#define s symbol
struct fraction
{
    int n; // åå­
    int d; // åæ¯
    int s; // ç¬¦å·ï¼åå­ä¸ºè´æ¶åå¼ä¸º-1ï¼ä¸ºæ­£æ¶åå¼ä¸º1ï¼å¶å®åå¼æ æä¹
};

int scan_frac(struct fraction *f,struct fraction *g)
{
	int a,b,c,d;
	if(scanf("%d/%d*%d/%d",&a,&b,&c,&d)!=EOF)
	{
		f->n=a;
		f->d=b;
		g->n=c;
		g->d=d;
		if(a>=0)
			f->s=1;
		else
			f->s=-1;
		if(c>=0)
			g->s=1;
		else
			g->s=-1;
		return 4;
	}
	else
		return EOF;
}

struct fraction multiply_frac(struct fraction f,struct fraction g)
{
	struct fraction a;
	a.n=f.n*g.n;
	a.d=f.d*g.d;
	a.s=f.s*g.s;
	if(a.n<0)
		a.n=-a.n;
	if(a.d<0)
		a.d=-a.d;
	if(a.n)
	{
		int i=2;
		for(;i<=a.n&&i<=a.d;i++)
		{
			if(a.n%i==0&&a.d%i==0)
			{
				a.n/=i;
				a.d/=i;
				i-=1;
			}
		}
		if(a.n%a.d==0&&a.d!=1)
		{
			a.n=a.n/a.d;
			a.d=1;
		}
	}
	return a;
}


int main()
{
    struct fraction f1, f2, product;
    while(scan_frac(&f1, &f2) != EOF)
    {
        product = multiply_frac(f1, f2);
        if(product.numerator == 0)
        {
            printf("0\n");
            continue;
        }
        if(product.symbol == -1)
            printf("-");
        printf("%d/%d\n", product.numerator, product.denominator);
    }
    return 0;
}
/**************************************************************
	Problem: 1511
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

