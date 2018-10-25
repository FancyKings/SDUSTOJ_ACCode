#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 1000000
long long n=0,num=0,outn=0;
long long a[MAX_SIZE];
long long out[MAX_SIZE];
int main()
{
    scanf("%lld",&n);
    while(n--)
    {
       scanf("%lld",&num);
       long long i=0,savenum=num;
       while(savenum--)
       {
           scanf("%lld",&a[i++]);
       }
       long long sum=0,j=0,cnt=0;
       for(i=0;i<num;i++)
        sum+=a[i];
       for(i=0;i<num;i++)
       {
           if(!(sum%num)&&(sum/num)==a[i])
           {
               cnt+=1;
           }
       }
       if(cnt)
       {
           printf("%lld\n",cnt);
           int flag=0;
           for(i=0;i<num;i++)
            if(a[i]==sum/num)
           {
               if(!flag)
               {
                   printf("%lld",i+1);
                   flag++;
               }
               else
                printf(" %lld",i+1);
           }

       }


       if(!cnt)
       printf("0");
       printf("\n");
       memset(out,0,sizeof(out));
       memset(a,0,sizeof(a));
    }
    return 0;
}

/**************************************************************
	Problem: 1080
	User: 201701060705
	Language: C
	Result: Accepted
	Time:136 ms
	Memory:16372 kb
****************************************************************/

