#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long m,n;
    while (~scanf("%llu",&m))
    {
        if(m<1)printf("Calm\n");
        else if(m<=3)printf("Light air\n");
        else if(m<=27)printf("Breeze\n");
        else if(m<=47)printf("Gale\n");
        else if(m<=63)printf("Storm\n");
        else printf("Hurricane\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1636
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

