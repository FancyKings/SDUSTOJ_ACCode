#include <stdio.h>
unsigned long long moveit(unsigned long long p)
{
    if(p == 1)
        return 1;
    else
    {
        return 2 * moveit(p - 1) + 1;
    }
}

int main()
{
    unsigned long long pan;
    scanf("%llu" ,&pan);
//    if( pan == 64)
//        printf("18446744073709511615\n");
//    else
        printf("%llu\n", moveit(pan));
	return 0;
}

/**************************************************************
	Problem: 1769
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

