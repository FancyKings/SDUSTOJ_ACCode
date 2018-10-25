#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int mz[100005];

int main()
{
	int n;
	while (scanf("%d", &n) != EOF && n)
	{
		memset(mz, 0, sizeof(mz));
		int p=0,max=0;
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &p);
			mz[p]++;
			if (mz[p] > max)
			{
				max = mz[p];
			}
		}
		int flag = 1;
		for (int l = 0; l < 100005; l++)
		{
			if (mz[l] == max)
			{
				if (flag)
				{
					printf("%d", l);
					flag = 0;
				}
				else
				{
					printf(" %d", l);
				}
				
			}
			//printf("\n");
		}
		printf("\n");
	}

	//system("pause");
	return 0;
}
/**************************************************************
	Problem: 2123
	User: 201701060705
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:1136 kb
****************************************************************/

