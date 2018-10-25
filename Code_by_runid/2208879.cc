#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point
{
    int x;//æ¨ªåæ 
    int y;//çºµåæ 
}POINT;

typedef struct rect
{
    POINT LeftTop;//å·¦ä¸è§é¡¶ç¹çåæ 
    POINT RightBottom;//å³ä¸è§é¡¶ç¹çåæ 
}RECT;

void getPoint(POINT * p)
{
    scanf("%d %d",&p->x,&p->y);
}

void getRect(RECT * rc)
{
    scanf("%d %d",&rc->LeftTop.x,&rc->LeftTop.y);
    scanf("%d %d",&rc->RightBottom.x,&rc->RightBottom.y);
}

int judgeRelation(POINT p,RECT rc)
{
    if((p.x==rc.LeftTop.x&&p.y<=rc.LeftTop.y&&p.y>=rc.RightBottom.y)
       ||(p.x==rc.RightBottom.x&&p.y<=rc.LeftTop.y&&p.y>=rc.RightBottom.y)
       ||(p.y==rc.LeftTop.y&&p.x>=rc.LeftTop.x&&p.x<=rc.RightBottom.x)
       ||p.y==rc.RightBottom.y&&p.x>=rc.LeftTop.x&&p.x<=rc.RightBottom.x)
        return 1;
    else if((p.x<rc.RightBottom.x&&p.x>rc.LeftTop.x)
            &&(p.y<rc.LeftTop.y&&p.y>rc.RightBottom.y))
        return 2;
    else
        return 3;
}

int main()
{
    POINT p;
    RECT rc;
    getPoint(&p);
    getRect(&rc);
    switch (judgeRelation(p,rc))
    {
    case 1:
        puts("The point is on one edge.");
        break;
    case 2:
        puts("The point is inside the rectangle.");
        break;
    case 3:
        puts("The point is outside the rectangle.");
        break;
    }
    return 0;
}
/**************************************************************
	Problem: 1497
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

