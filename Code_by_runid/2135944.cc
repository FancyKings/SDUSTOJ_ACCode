#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10000
char a[MAX_SIZE],b[MAX_SIZE];
void move(char s[],int lena,int lenb)
{
    int i,savea=lena;lena-=1;
    for(i=lenb-1;i>=0;i--)
    {
        s[lena--]=s[i];
    }
    for(i=0;i<savea-lenb;i++)
        s[i]='0';
//    for(i=0;i<savea;i++)
//        printf("c=%c i=%d",s[i],i);
}
int main()
{
    while(~scanf("%s",a))
    {
        scanf("%s",b);
        long long sum=0;
        int lena=strlen(a),lenb=strlen(b);
        if(lena>lenb)
            move(b,lena,lenb);
        if(lenb>lena)
            move(a,lenb,lena);
        int max=(lena>lenb)?lena:lenb;
        int i;
        for(i=max-1;i>=0;i--)
        {
            int tmp=a[i]+b[i]-'0'-'0';
            if(tmp>9)
            {
                sum+=1;
                if(i)
                {
                    a[i-1]+=tmp/10;
                }
//                else
//                    sum+=1;
            }
        }
        printf("%lld\n",sum);
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
    }
    return 0;
}

/**************************************************************
	Problem: 1172
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:768 kb
****************************************************************/

