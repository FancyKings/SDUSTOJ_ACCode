#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100005
int main()
{
//    FILE *p;
//    p=fopen("ceshi.txt","w");
    int n;
    while(~scanf("%d",&n))
    {
        char s[MAX];
        int i;
        getchar();
        for(i=0;i<n;i++)
        {
            gets(s);
            int lenth=strlen(s);
            int j;
            for(j=0;j<lenth;j++)
            {
                if(s[j]>='A'&&s[j]<='Z')
                    s[j]+='a'-'A';
            }
//            fprintf(p,"%s",s);
            printf("%s",s);        }
//        fprintf(p,"\n");
        printf("\n");

    }
//    fclose(p);
    return 0;
}

/**************************************************************
	Problem: 2143
	User: 201701060705
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:772 kb
****************************************************************/

