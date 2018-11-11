#include<stdio.h>
int main()
{
    int shu=0;
    scanf("%d",&shu);
    int ge=shu%10,shi=(shu/10)%10,bai=shu/100;
    if(shi*shi*shi+bai*bai*bai+ge*ge*ge==shu)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

/**************************************************************
	Problem: 1012
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

