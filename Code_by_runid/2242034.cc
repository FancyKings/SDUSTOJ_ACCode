#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_array(int a[])
{
    int num;
    scanf("%d",&num);
    int i;
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    return num;
}
int array_value(int a[],int n,int k)
{
    if(k>=0)
        return (a[k]);
    else
        return (a[n+k]);
}


int main()
{
    int size, arr[1000], m, k;
    size = get_array(arr);
    while(scanf("%d", &k) != EOF)
        printf("%d\n", array_value(arr, size, k));
    return 0;
}
/**************************************************************
	Problem: 1611
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

