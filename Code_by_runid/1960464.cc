#include<stdio.h>
int main()
{
    int num=0,sz=0,xx=0,dx=0,ts=0,Case=1;
    scanf("%d",&num);
    while(num--)
    {
        int len=0;
        scanf("%d",&len);
        int i;
        char s[1005];
        gets(s);
        for(i=0;i<=len;i++)
        {
            if(s[i]>='0'&&s[i]<='9'&&sz==0)
            {
                sz=1;
            }
            if(s[i]>='a'&&s[i]<='z'&&xx==0)
            {
                xx=1;
            }
            if(s[i]>='A'&&s[i]<='Z'&&dx==0)
            {
                dx=1;
            }
            if(s[i]=='#'||s[i]=='@'||s[i]=='!'||s[i]=='$'||s[i]=='&'||s[i]=='*'&&ts==0)
            {
                ts=1;
            }

        }
        //printf("%d %d %d %d\n",sz,xx,dx,ts);
        if(ts+dx+xx+sz==4)
        {
            printf("Case %d: Yes\n",Case);
        }
        else
        {
            printf("Case %d: No\n",Case);
        }
        Case++;
        dx=0;xx=0;ts=0;sz=0;
    }
    return 0;
}

/**************************************************************
	Problem: 2127
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

