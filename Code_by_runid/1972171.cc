#include<stdio.h>
int main()
{
    int i,j,m,n,ans,count=0,s[100]= {0};
    scanf("%d %d",&m,&n);
    printf("=====\n");
    for(i=n; i>=m&&i>1; i--)
    {
        ans=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
                ans=0;
        }
        if(ans)
        {
            s[count]=i;
            count++;
        }
    }
//    if(s[0])
//        printf("=====\n");
    for(i=0; i<count; i++)
    {
        printf("%d\n",s[i]);
    }
    printf("=====\n");
//    if(s[0])
//        printf("=====");
    return 0;
}

/**************************************************************
	Problem: 1027
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

