#include<stdio.h>
#include"isort.h"
#ifndef ISORT_C
#define ISORT_C
#define LEN 50
int main(){
    int arr[LEN];
    int *a;
    for(int i=0;i<LEN; i++){
        printf("Enter Ur Numbers : ");
        scanf("%d",&arr[i]);
    }
    a=arr;
    insertion_sort(a,50);
    for (int k = 0; k < 50; k++)
    {
       printf("%d,",*(arr +k));
    }
    printf("\n");
    return 0;
}
#endif
