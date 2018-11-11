#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//#define MAX_STR_LEN 10000
//char s[MAX_STR_LEN];

struct time{
    int h,m,s;
};



struct time to_time(int n)
{
    struct time temp;
    temp.h=n/3600;
    temp.m=(n/60)%60;
    temp.s=(n%60);
    return temp;
};
int put_time(struct time t)
{
    printf("%02d:%02d:%02d\n",t.h,t.m,t.s);
}

int main()
{
    int n;
    struct time tm;
    while(scanf("%d", &n) != EOF)
    {
        tm = to_time(n);
        put_time(tm);
    }
    return 0;
}

/**************************************************************
	Problem: 1937
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

