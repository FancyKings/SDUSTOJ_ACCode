#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int count=1;
int main ()
{
    int cas;
    scanf ("%d",&cas);
    int sum;
    while (cas--)
    {
        int flag=0;
        scanf ("%d",&sum);
        int a,b,c;
        for (a=1; a<10; a++)
        {
            for (b=0; b<10; b++)
            {
                for(c=0; c<10; c++)
                {
                    if (a*2+b*2+c==sum)
                    {
                        if (flag==0)
                            printf ("Case %d:\n",count++);
                        flag++;
                        printf ("%d%d%d%d%d\n",a,b,c,b,a);
                    }
                }
            }
        }
        for (a=1; a<10; a++)
        {
            for (b=0; b<10; b++)
            {
                for(c=0; c<10; c++)
                {
                    if (a*2+b*2+c*2==sum)
                    {
                        if (flag==0)
                            printf ("Case %d:\n",count++);
                        flag++;
                        printf ("%d%d%d%d%d%d\n",a,b,c,c,b,a);
                    }
                }
            }
        }
        if (flag==0)
            printf ("Case %d:\n-1\n",count++);
    }
}

/**************************************************************
	Problem: 1549
	User: 201701060705
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

