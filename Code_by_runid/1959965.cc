#include<stdio.h>
int main()
{
    unsigned long long time=0,num=0,Case=1,h=0,f=0,s=0;
    while(scanf("%llu",&num)!=EOF)
    {
        while(num--)
        {
            scanf("%llu:%llu:%llu",&h,&f,&s);
            time+=h*3600+f*60+s;
        }
        printf("Case %llu: %llu\n",Case,time);
        time=0;
        Case++;
    }
    return 0;
}

/**************************************************************
	Problem: 2120
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:800 kb
****************************************************************/

