#include<stdio.h>
#include<stdlib.h>


int main()
{
	unsigned long long k, sum = 0, i = 0;
	scanf("%llu", &k);
	unsigned long long temp = 1;
	if (k == 0)
	{
		printf("1\n");
	}

	else
	{

		for (i = 1; i <= k; i++)
		{
			temp *= i;
			sum += temp;

			if (sum>4294967295 || temp>4294967295)
			{
				printf("overflow\n");
//				system("pause");
				return 0;
			}

			//        printf("%llu\t%llu\n",sum,fact(i));

		}
		printf("%llu\n", sum);

	}
	//system("pause");
	return 0;
}
/**************************************************************
	Problem: 1029
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

