#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int add_array(int arr[], int a[], int m, int b[], int n)
{
    memset(arr,0,sizeof(arr));
    int num=(m>n)?m:n,i;
    if(n<num)
        for(i=n;i<=num;i++)
            b[i]=0;
    if(m<num)
        for(i=m;i<=num;i++)
            a[i]=0;
    for(i=0;i<num;i++)
    {
        arr[i]=a[i]+b[i];
    }
    return num;
}



int get_array(int a[])
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return n;
}

int put_array(int a[], int n)
{
    int i;
    if(n > 0)
        printf("%d", a[0]);
    for(i = 1; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}

int main()
{
    int cases;
    int m, n, k,arr[1000], ar[1000], a[1000];
    scanf("%d", &cases);
    while(cases--)
    {
        m = get_array(a);
        n = get_array(ar);
        k = add_array(arr, ar, n, a, m);
        put_array(arr, k);
    }
    return 0;
}

/**************************************************************
	Problem: 2041
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

