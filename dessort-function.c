#include <stdio.h>

int DesSort(int arr[]){
    int min = arr[0];
    for(int i = 0 ; i < 7 ; i++){
        if(min < arr[i]){
            min = arr[i];
        }
    }
}

int main(void){
    int arr[7] = {0};
    for(int i = 0 ; i < 7 ; i ++){
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
}