#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 20000
typedef struct
{
    int length;
    int array[MAX_SIZE];
}ARR_TYPE;

 int input_arr(ARR_TYPE *arr)
 {
     scanf("%d",&arr->length);
     int i;
     for(i=0;i<arr->length;i++)
     {
         scanf("%d",&arr->array[i]);
     }
 }

 int output_arr(ARR_TYPE arr)
 {
     int i;
     printf("%d",arr.array[0]);
     for(i=1;i<arr.length;i++)
     {
         printf(" %d",arr.array[i]);
     }
     printf("\n");
 }

int main()
{
   ARR_TYPE arr;
   input_arr(&arr);
   output_arr(arr);
    return 0;
}
/**************************************************************
	Problem: 1494
	User: 201701060705
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:832 kb
****************************************************************/

