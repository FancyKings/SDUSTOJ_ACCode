#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#include<Windows.h>

int main()
{
	unsigned long long Case = 1, n = 0;
	while (scanf("%d", &n) != EOF)
	{
		//unsigned long long max = 0;
		unsigned long long max = n*log10(2);
		unsigned long long m, k = 0;
		for (m = 0;; m++)
		{
			if ((m*log10(10)) <= max)
			{
				k = m;
				//printf("%llu\t%llu\n",k,m);
			}
			else
			{
				printf("Case #%llu: %llu\n", Case, k);
				break;
			}

		}
		Case++;

	}
	//system("pause");
	return 0;
}

/**************************************************************
	Problem: 2121
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

