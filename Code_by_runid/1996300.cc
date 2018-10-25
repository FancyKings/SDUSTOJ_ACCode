#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main()
{
    char IN[5]={0},CF[5]={'C','-','>','F'},FC[5]={'F','-','>','C'};
    double low=0,high=0,step=0;
    scanf("%s",IN);
    scanf("%lf%lf%lf",&low ,&high, &step);

    if(strcmp(IN,CF)==0)
    {
//        printf("same\n");
        double i;
        printf("   C  ->    F\n");
        for(i=low;i<=high+0.01;i+=step)
        {
            double m=((i*9)/5.0)+32;
//          printf("shuchu%3.1lf\t\t%3.1lf",i,m);
            printf("%5.1lf ->%6.1lf\n",i,m);
        }
    }
    else
    {
//        printf("dis\n");
        double i;
        printf("   F  ->    C\n");
        for(i=low;i<=high+0.01;i+=step)
        {
            printf("%5.1lf ->%6.1lf\n",i,((i-32)*5)/9.0);
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1028
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

