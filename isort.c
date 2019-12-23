#include<stdio.h>
#include"isort.h"
void shift_element(int *arr, int i){
    int j;

    for(j = i; j > 0 ;j--) {
        *(arr + j) = *(arr + j - 1);
    }
}
void insertion_sort(int *arr,int len){
    int key;
    for(int i=1;i<len;i++){
        int j;
        key=*(arr+i);
        j=i-1;
        while(j>=0 && *(arr+j)>key){
           shift_element (arr+j,1);
            j=j-1;
        }
        *(arr+j+1)=key;
}
}
