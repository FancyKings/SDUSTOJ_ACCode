#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10000
char a[MAX_SIZE],b[MAX_SIZE];
int CASE=0;
void move(int pan,int now,int temp,int end)
{
//    printf("%d %d %d %d\n",pan,now,temp,end);
    if(pan<=0)
        return ;
    if(pan==1)
    {
        printf("   plate %d : from %d to %d\n",pan,now,end);
    }
    else
    {
        move(pan-1,now,end,temp);
        printf("   plate %d : from %d to %d\n",pan,now,end);
        move(pan-1,temp,now,end);
    }
}
int main()
{
    int js=0;
    int pan,now,temp,end;
    while(~scanf("%d",&pan))
    {
        scanf("%d %d %d",&now,&temp,&end);
        if(!js)
        {
            printf("case %d :\n",++CASE);
            js++;
        }
        else
        printf("\ncase %d :\n",++CASE);
        move(pan,now,temp,end);
    }
    return 0;
}

/**************************************************************
	Problem: 1245
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:768 kb
****************************************************************/

