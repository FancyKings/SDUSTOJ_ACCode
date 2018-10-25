#include<stdio.h>

void Binary(int n)
{
    int j,flag=0;
    for(j=16; j >= 0; j--)
    {
        if ( n & ( 1 << j) )
        {
            printf("1");
            flag++;
        }
        else
        {
            if(flag)
                printf("0");
        }
    }
}

#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        if(!n)
            printf("0");
        Binary(n);
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 2178
	User: 201701060705
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

