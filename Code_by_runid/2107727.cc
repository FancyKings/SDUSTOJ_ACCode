#include <stdio.h>
#include <stdlib.h>

int compare(int *min, int *mid, int *max)
{
    int a[5];
    a[0]=*min;a[1]=*mid;a[2]=*max;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=1;j<3;j++)
        {
            if(a[j-1]>a[j])
            {
                int t;
                t=a[j-1];a[j-1]=a[j];a[j]=t;
            }
        }
    }
    *min=a[0];*mid=a[1];*max=a[2];
}




int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
/**************************************************************
	Problem: 1241
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

