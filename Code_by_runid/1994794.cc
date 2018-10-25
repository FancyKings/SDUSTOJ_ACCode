#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i=0;
    int M=0,sum=0,Case=1;
    while(scanf("%d",&M)!=EOF)
    {
        for(i=100; i<=998; i++)
        {
            int g,s,b;
            g=i%10;
            s=(i/10)%10;
            b=(i/100);
            if(g!=s&&s!=b&&g!=b&&!(i%M))
            {
                sum+=i;
            }
        }
        printf("case %d:%d\n",Case,sum);
        sum=0;
        Case++;
    }
    return 0;
}

/**************************************************************
	Problem: 1207
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

