#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define POINT struct dertpoint

POINT{
	double x,y;
};

void input_point(POINT * p)
{

	scanf("%lf %lf",&p->x,&p->y);
}

double distance(POINT  p,POINT  q)
{
	double dert=0;
	dert=sqrt((p.x-q.x)*(p.x-q.x)+(p.y-q.y)*(p.y-q.y));
	return dert;
}

int main()
{
   POINT p,q;
   double dis;
   input_point(&p);
   input_point(&q);
   dis=distance(p,q);
   printf("%g",dis);
   return 0;
}
/**************************************************************
	Problem: 1495
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

