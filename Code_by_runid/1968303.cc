#include<stdio.h>
int main()
{
    int sc=0;
    while(scanf("%d",&sc)!=EOF)
    {
        if(sc>=0)
        {
            if(sc>100)
                sc=-1;
            else
            {
                sc/=10;
            }
        }
        else
        {
            sc=sc;
        }
        switch (sc)
        {
        case 10:
        case 9:
            printf("Excellent\n");
            break;
        case 8:
            printf("Good\n");
            break;
        case 7:
            printf("Average\n");
            break;
        case 6:
            printf("Pass\n");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Failing\n");
            break;
        default :
            printf("Error\n");
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1025
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

