#include <stdio.h>
int cnt=0;

int add(cnt)
{
    if(!cnt)
        return 0;
    else
    {
        int a;
        scanf("%d",&a);
        cnt--;
        return (a+add(cnt));
    }
}

int main()
{
    int num;
    scanf("%d",&num);
    cnt = num;
    printf("%d\n",add(num));
    return 0;
}

/**************************************************************
	Problem: 1764
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

