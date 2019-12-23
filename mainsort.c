#include<stdio.h>
#include"isort.h"
#ifndef ISORT_C
#define ISORT_C
int main(){
    int arr[50];
    int *a;
    for(int i=0;i<50; i++){
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