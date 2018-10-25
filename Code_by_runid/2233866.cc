#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int now=1;
int main()
{
	int cnt;
	scanf("%d",&cnt);
    int num;
    while(cnt--)
    {
		int flag = 0;
		scanf("%d",&num);
		int a,b,c;
		for(a=1;a<10;a++)
		{
			for(b=0;b<10;b++)
			{
				for(c=0;c<10;c++)
				{
					if(2*a+2*b+c==num)
					{
						if(!flag)
							printf("Case %d:\n",now);
						flag++;
						printf("%d%d%d%d%d\n",a,b,c,b,a);
					}
				}
			}
		}
		for(a=1;a<10;a++)
		{
			for(b=0;b<10;b++)
			{
				for(c=0;c<10;c++)
				{
					if(2*a+2*b+2*c==num)
					{
						if(!flag)
							printf("Case %d:\n",now);
						flag++;
						printf("%d%d%d%d%d%d\n",a,b,c,c,b,a);
					}
				}
			}
		}
		if(!flag)
		{
			printf("Case %d:\n-1\n",now);
		}
		now++;
    }
    return 0;
}


/**************************************************************
	Problem: 1549
	User: 201701060705
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

