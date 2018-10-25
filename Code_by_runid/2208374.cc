#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
    double p,w,s;
    while(~scanf("%lf",&p))
    {
        scanf("%lf %lf",&s,&w);
        double sum = 0;
        if(s < 250)
        {
            sum = p * s * w;
        }
        else if(s < 500)
        {
            sum = p * s * w * 0.98;
        }
        else if(s < 1000)
        {
            sum = p * s * w * 0.95;
        }
        else if(s < 2000)
        {
            sum = p * s * w * 0.92;
        }
        else if(s < 3000)
        {
            sum = p * s * w * 0.90;
        }
        else
        {
            sum = p * s * w * 0.85;
        }
        int zh = (int) sum;
        //double point = sum - zh;
        //if(point >= 0.5)
        //{
        //    zh += 1;
        //}
        if(zh%10 >= 5)
        {
            zh += 10;
            zh -= zh%10;
        }
        else
        {
            zh -= zh%10;
        }
        printf("%d\n",zh);
    }
	return 0;
}

/**************************************************************
	Problem: 1768
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

