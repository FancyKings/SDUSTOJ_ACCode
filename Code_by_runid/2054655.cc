#include <stdio.h>
#include <stdlib.h>
//#define MAX 100100
//int a[MAX];

int isleap(int year)
{
    if((year%4==0 && year%100!=0)||year%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int year,month,day;
        scanf("%d-%d-%d",&year,&month,&day);
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            if(day>31)
            {
                printf("error date!\n");
                continue;
            }
        }
        else if(month!=2)
        {
            if(day>30)
            {
                printf("error date!\n");
                continue;
            }
        }
        if(year<0||month<0||day<0||month>12||day>31)
        {
            printf("error date!\n");
            continue;
        }
        else
        {
            if(isleap(year))
            {
                if(month==2&&day>29)
                {
                    printf("error date!\n");
                    continue;
                }
            }
            else
            {
                if(month==2&&day>28)
                {
                    printf("error date!\n");
                    continue;
                }
            }
            if(isleap(year))
            {
                int a=month,c=day;
                switch (a)
                {
                case 1:
                    printf("%d\n",c);
                    continue;
                case 2:
                    printf("%d\n",c+31);
                    continue;
                case 3:
                    printf("%d\n",c+60);
                    continue;
                case 4:
                    printf("%d\n",c+91);
                    continue;
                case 5:
                    printf("%d\n",c+121);
                    continue;
                case 6:
                    printf("%d\n",c+152);
                    continue;
                case 7:
                    printf("%d\n",c+182);
                    continue;
                case 8:
                    printf("%d\n",c+213);
                    continue;
                case 9:
                    printf("%d\n",c+244);
                    continue;
                case 10:
                    printf("%d\n",c+274);
                    continue;
                case 11:
                    printf("%d\n",c+305);
                    continue;
                case 12:
                    printf("%d\n",c+335);
                    continue;
                default:
                    printf("error date!\n");
                    continue;
                }
            }
            else
            {
                int a=month,c=day;
                switch (a)
                {
                case 1:
                    printf("%d\n",c);
                    continue;
                case 2:
                    printf("%d\n",c+31);
                    continue;
                case 3:
                    printf("%d\n",c+59);
                    continue;
                case 4:
                    printf("%d\n",c+90);
                    continue;
                case 5:
                    printf("%d\n",c+120);
                    continue;
                case 6:
                    printf("%d\n",c+151);
                    continue;
                case 7:
                    printf("%d\n",c+181);
                    continue;
                case 8:
                    printf("%d\n",c+212);
                    continue;
                case 9:
                    printf("%d\n",c+243);
                    continue;
                case 10:
                    printf("%d\n",c+273);
                    continue;
                case 11:
                    printf("%d\n",c+304);
                    continue;
                case 12:
                    printf("%d\n",c+334);
                    continue;
                default:
                    printf("error date!\n");
                    continue;
                }
            }
        }
        return 0;
    }
}

/**************************************************************
	Problem: 1101
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

