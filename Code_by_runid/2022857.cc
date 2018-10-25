#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_primer(int num)
{
    if(num==1)
        return 0;
    int max=0;
    max=sqrt(num);
    int i;
    for(i=2;i<=max;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}



int main()
{
    int num;
    while(scanf("%d", &num) != EOF)
    {
        if(is_primer(num))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
/**************************************************************
	Problem: 1233
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:756 kb
****************************************************************/

