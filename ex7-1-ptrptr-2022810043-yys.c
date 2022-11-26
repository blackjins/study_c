#include <stdio.h>

void MaxAndMin(int * Max, int * Min, int arr[]){
    int tmp_max = arr[0];
    int tmp = 0;
    int tmp_min = arr[0];
    for(int i = 0 ; i < 5 ; i++){
        if(tmp_max < arr[i]){
            tmp_max = arr[i];
            tmp = i;
        }
    }
    Max = &arr[tmp];

    tmp = 0;
    for(int i = 0 ; i < 5 ; i++){
        if(tmp_min > arr[i]){
            tmp_min = arr[i];
            tmp = i;
        }
    }
    Min = &arr[tmp];
    printf("Max = \n", Max);
    printf("Min = ", Min);
}

int main(void){
    int * maxPtr;
    int * minPtr;
    int arr[5] = {0};
    for(int i = 0 ; i < 5 ; i++){
        printf("input:");
        scanf("%d", &arr[i]);
    }
    MaxAndMin(maxPtr, minPtr, arr);
}