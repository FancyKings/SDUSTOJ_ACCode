#include <stdio.h>
#include <stdlib.h>


int maxValue(int x,int y,int z)
{
    int max=0;
    max=x>y?x:y;
    max=max>z?max:z;
    return max;
}

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", maxValue(x, y, z));
    return 0;
}
/**************************************************************
	Problem: 1224
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

