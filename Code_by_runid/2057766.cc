#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1,x2,y1,y2,k,b,rx,ry,r;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&rx,&ry,&r);
    if(fabs(x1-x2)<=0.001)
    {
        if(fabs(x1-rx)<=r+0.001&&fabs(x1-rx)>=r-0.01)
            printf("Tangency\n");
        if(fabs(x1-rx)>r+0.001)
            printf("Disjoint\n");
        if(fabs(x1-rx)<r-0.01)
            printf("Interseetion\n");

    }
    else
    {
        k=(y1-y2)/(x1-x2);
        b=y2-k*x2;
        double dert=(fabs(ry-k*rx-b))/sqrt((k*k)+1);
        if(dert<=r+0.001&&dert>=r-0.001)
            printf("Tangency\n");
        if(dert>r+0.001)
            printf("Disjoint\n");
        if(dert<r-0.001)
            printf("Interseetion\n");

    }

    return 0;
}

/**************************************************************
	Problem: 1197
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:756 kb
****************************************************************/

