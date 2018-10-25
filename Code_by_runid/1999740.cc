#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    char bu[50]={0};
    gets(bu);
    int a = 0, b = 0, c = 0, d = 0, m = 0, n = 0;
    while(scanf("%d,%d,%d/%d,%d,%d", &a, &b, &c, &d, &m, &n) != EOF)
    {
        int i, x, y, z, flag = 0;
        {
            for(i = 0; i <= n; i++)
            {
                x = i;
                z = d * (m - b * n - a * x + b * x) / (c - b * d);
                y = n - x - z;
                if(x >= 0&& y >= 0&& z >= 0&& a * d * x + b * d * y + c * z == d * m)
                {
                    if(!flag)
                        printf("COCKS,HENS,CHICKS\n");
                    flag = 1;
                    printf("%d,%d,%d\n", x, y, z);
                }
            }
            if(!flag)
                printf("Cannot buy!\n");
            printf("\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1046
	User: 201701060705
	Language: C
	Result: Accepted
	Time:136 ms
	Memory:748 kb
****************************************************************/

