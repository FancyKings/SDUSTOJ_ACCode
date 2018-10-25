#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m;
	scanf("%d",&m);
	while(m--)
	{
		double cash;
		scanf("%lf",&cash);
		if(cash<=750)
		{
			printf("%.6lf\n",cash*0.01);
		}
		else if(cash<=2250)
		{
			printf("%.6lf\n",7.5+(cash-750)*0.02);
		}
		else if(cash<=3750)
		{
			printf("%.6lf\n",37.5+(cash-2250)*0.03);
		}
		else if(cash<=5250)
		{
			printf("%.6lf\n",82.5+(cash-3750)*0.04);
		}
		else if(cash<=7000)
		{
			printf("%.6lf\n",142.5+(cash-5250)*0.05);
		}
		else
		{
			printf("%.6lf\n",230+(cash-7000)*0.06);
		}
	}
	return 0;
}
/**************************************************************
	Problem: 1638
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

