#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int k=0,now=0;
    char s[100]= {0};
    //scanf("%d  ",&k);
    int i=0;
   // gets(s);
    //int len=strlen(s);
    while(scanf("%d  ",&k)!=EOF)
    {
        gets(s);
        int len=strlen(s);
        if(k>0)
        {
            for(now=k; now<k+len; now++)
            {
                int temp=now%len;
                printf("%c",s[temp]);
                if(now==k+len-1)
                {
                    printf("\n");
                }
            }
        }
        if(k<0)
        {
            k=-k;
            if(len>=k)
            {

                for(now=len-k; now<2*len-k; now++)
                {
                    int temp=now%len;
                    printf("%c",s[temp]);
                    if(now==2*len-k-1)
                    {
                        printf("\n");
                    }
                }

            }
            if(k>len)
            {
                int pa=(k/len);
                for(now=(pa+1)*len-k; now<(pa+2)*len-k; now++)
                {
                    int temp=now%len;
                    printf("%c",s[temp]);
                    if(now==(pa+2)*len-k-1)
                    {
                        printf("\n");
                    }
                }

            }
        }
        if(k==0)
        {
            printf("%s\n",s);
        }
    }
    return 0;

}

/**************************************************************
	Problem: 2124
	User: 201701060705
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:800 kb
****************************************************************/

