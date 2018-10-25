#include<stdio.h>
#include<limits.h>
#include<math.h>

//unsigned int fact(unsigned int o)
//{
//    if(o!=1)
//    {
//        o*= fact(o-1);
//    }
//    else
//    {
//        o=1;
//        return o;
//    }
//}


int main()
{
    unsigned long long int k=0,sum=0,i=0;
    scanf("%llu",&k);
    unsigned long long int temp=1;
    if(k==0)
    {
        printf("1\n");
    }
//    else if(k>13)
//    {
//        printf("overflow\n");
//    }
    else
    {

        for(i=1; i<=k; i++)
        {
            temp*=i;
            sum+=temp;

            if(sum>4294967295||temp>4294967295)
            {
                printf("overflow\n");
                return 0;
            }

//        printf("%llu\t%llu\n",sum,fact(i));

        }
        printf("%llu\n",sum);

    }
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

