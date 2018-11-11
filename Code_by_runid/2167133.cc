#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct CPLX{
	double s,x;
};
void get_cplx(struct CPLX *cx)
{
	scanf("%lf %lf",&cx->s,&cx->x);
}
void put_cplx(struct CPLX cx)
{
	printf("%lg %lg\n",cx.s,cx.x);
}
struct CPLX  add_cplx(struct CPLX cx1,struct CPLX cx2)
{
	struct CPLX m;
	m.x=cx1.x+cx2.x;
	m.s=cx1.s+cx2.s;
	return m;
}
struct CPLX  sub_cplx(struct CPLX cx1,struct CPLX cx2)
{
	struct CPLX n;
	n.x=cx1.x-cx2.x;
	n.s=cx1.s-cx2.s;
	return n;
}


int main()
{
    struct CPLX ab, cd;
    int cases;
    scanf("%d", &cases);
    while(cases--)
    {
        get_cplx(&ab);
        get_cplx(&cd);
        put_cplx( add_cplx(ab, cd) );
        put_cplx( sub_cplx(ab, cd) );
    }
    return 0;
}
/**************************************************************
	Problem: 1368
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

