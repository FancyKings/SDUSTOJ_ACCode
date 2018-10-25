#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    scanf("(%lf, %lf)",&x,&y);
    if(x==0&&y==0)
        printf("(%.1lf, %.1lf) is origin\n",x,y);
    else if(x==0)
        printf("(%.1lf, %.1lf) is on the y axis\n",x,y);
    else if(y==0)
        printf("(%.1lf, %.1lf) is on the x axis\n",x,y);
    else if(x>0&&y>0)
        printf("(%.1lf, %.1lf) is in quadrand I\n",x,y);
    else if(x<0&&y<0)
        printf("(%.1lf, %.1lf) is in quadrand III\n",x,y);
    else if(x>0&&y<0)
        printf("(%.1lf, %.1lf) is in quadrand IV\n",x,y);
    else if(x<0&&y>0)
        printf("(%.1lf, %.1lf) is in quadrand II\n",x,y);
    return 0;
}

/**************************************************************
	Problem: 1162
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

