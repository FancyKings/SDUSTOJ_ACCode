#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zh=0,fu=0;
    double avrz=0,avrf=0;
    int n,sum=0;
    while(~scanf("%d",&n))
    {
        if(n)
        {
            if(n>0)
            {
                avrz+=n;
                zh++;
            }

            else
            {
                avrf+=n;
                fu++;
            }
        }
        else
            break;
    }
    int flag=0;
    if(fu>0)
    {
        printf("%d %.2lf\n",fu,avrf/fu);
        flag++;
    }
    else
    {
        printf("0\n");
    }
    if(zh>0)
    {
        printf("%d %.2lf\n",zh,avrz/zh);
        flag++;
    }
    else
    {
        printf("0\n");
    }

    return 0;
}

/**************************************************************
	Problem: 1120
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

