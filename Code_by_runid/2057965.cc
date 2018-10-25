#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ä¸æ¬¡åé¢ä¸å®åå¨èå­ï¼ï¼ï¼æè¸ï¼ï¼ï¼
int main()
{
    double a,b,c;
    int Case=1;
    while(scanf("%lf",&a)&&a)
    {
        scanf("%lf %lf",&b,&c);
        if(a<0)
        {
            a=-a;
            b=-b;
            c=-c;
        }
        printf("Case %d :\n",Case++);
        if(a==1)
            printf("x^2");
        else
            printf("%gx^2",a);
        if(b>0)
        {
            if(b==1)
                printf(" + x");
            else
                printf(" + %gx",b);
        }
        if(b<0)
        {
            if(b==-1)
                printf(" - x");
            else
                printf(" - %gx",-b);
        }
        if(c>0)
        {
            printf(" + %g",c);
        }
        if(c<0)
        {
            printf(" - %g",-c);
        }
        printf(" = 0\n");
        double dert=(b*b-4*a*c);
        if(dert>0.000001)
        {
            printf("two real roots : %.6g, %.6g\n",(-b-sqrt(dert))/(2*a),(-b+sqrt(dert))/(2*a));
        }
        if(dert<=0.000001&&dert>=-0.000001)
        {
            double rmp=(-b)/(2*a);
            if(rmp!=0||rmp!=-0)
            printf("only one real root : %.6g\n",rmp);
            else
            printf("only one real root : 0\n");
        }
        if(dert<-0.000001)
        {
            printf("two imaginary roots :");
            double s=(-b)/(2*a),x=(sqrt(-dert)/(2*a));
            if(!(s<=0.000001&&s>=-0.000001))
            {
                printf(" %.6g",s);
                if(x>0&&x!=1)
                {
                    printf("+%.6gi, %.6g-%.6gi\n",x,s,x);
                }
                if(x<0&&x!=-1)
                {
                    printf("+%.6gi, %.6g-%.6gi\n",-x,s,-x);
                }
                if(x==1||x==-1)printf("+i, %.6g-i\n");

            }
            else
            {
                if(x>0&&x!=1)
                    printf(" %.6gi, -%.6gi\n",x,x);
                if(x<0&&x!=-1)
                    printf(" %.6gi, -%.6gi\n",-x,-x);
                if(x==1||x==-1)
                    printf(" i, -i\n");
            }
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1040
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

