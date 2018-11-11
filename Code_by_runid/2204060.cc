#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct point
{
    double x,y;
};

void get_point(struct point * p)
{
    scanf("(%lf, %lf)",&p->x,&p->y);
}

void judge_point(struct point p)
{
    if(p.x==0&&p.y==0)
        printf("(0.0, 0.0) is origin\n");
    else if(p.x==0)
    {
        printf("(%.1lf, %.1lf) is on the y axis\n",p.x,p.y);
    }
    else if(p.y==0)
    {
        printf("(%.1lf, %.1lf) is on the x axis\n",p.x,p.y);
    }
    else if(p.x>0)
    {
        if(p.y>0)
            printf("(%.1lf, %.1lf) is in quadrand I\n",p.x,p.y);
        else
            printf("(%.1lf, %.1lf) is in quadrand IV\n",p.x,p.y);
    }
    else
    {
        if(p.y>0)
            printf("(%.1lf, %.1lf) is in quadrand II\n",p.x,p.y);
        else
            printf("(%.1lf, %.1lf) is in quadrand III\n",p.x,p.y);
    }
}


int main()
{
    struct point p;
    get_point(&p);
    judge_point(p);
    return 0;
}
/**************************************************************
	Problem: 2039
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

