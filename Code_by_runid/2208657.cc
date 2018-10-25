#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a[1000];
int cmp(const void *a,const void *b)
{
    return (*(int *)b-*(int *)a);
}
int main()
{
    int m,n;
    while(~scanf("%d %d",&m,&n))
    {
        int i;
        for(i=0;i<m;i++)
            scanf("%d",&a[i]);
        qsort(a,m,sizeof(int),cmp);
        printf("%d",a[0]);
        for(i=1;i<n;i++)
        {
            if(i>=m)
                break;
            else
            {
                printf(" %d",a[i]);
            }
        }
        printf("\n");
        memset(a,0,sizeof(a));
    }
	return 0;
}

/**************************************************************
	Problem: 1567
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:752 kb
****************************************************************/

