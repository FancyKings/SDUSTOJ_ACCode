#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n)
        {
            if(n<10)
            {
                if(n==1)
                    printf("1st\n");
                else if(n==2)
                    printf("2nd\n");
                else if(n==3)
                    printf("3rd\n");
                else
                    printf("%dth\n",n);
            }
            else
            {
                int temp=n;
                if(n%10==1)
                    printf("%dst\n",temp);
                else if(n%10==2)
                    printf("%dnd\n",temp);
                else if(n%10==3)
                    printf("%drd\n",temp);
                else
                    printf("%dth\n",temp);
            }
        }
        else
            return 0;
    }
    return 0;
}

/**************************************************************
	Problem: 1098
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

