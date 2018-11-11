#include <stdio.h>

int myFloor(double data)
{
    int x;
    if(data==(int)data)
    {
        x=data;
    }
    else if(data>0)
    {
        x=data;
    }
    else
    {
        x=data-1;
    }
    return x;

}

int myCeil(double data)
{
    int x;
    if(data==(int)data)
    {
        x=data;
    }
    else if(data>0)
    {
        x=data+1;
    }
    else
    {
        x=data;
    }
    return x;
}

 
int main()
{
    double data;
    while(scanf("%lf", &data) != EOF)
        printf("%d %d\n", myFloor(data), myCeil(data));
    return 0;
}
/**************************************************************
	Problem: 1217
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

