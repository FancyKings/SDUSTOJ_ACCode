#include <stdio.h>
#include <stdlib.h>
#define DATE struct WHAT
struct WHAT{
    int n,y,r;
};
void getDate(DATE * date)
{
    scanf("%d %d %d",&date->n,&date->y,&date->r);
}
void putDate(DATE date)
{
    printf("%04d-%02d-%02d\n",date.n,date.y,date.r);
}
int main()
{
    DATE date;
    getDate(&date);
    putDate(date);
    return 0;
}
/**************************************************************
	Problem: 2033
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

