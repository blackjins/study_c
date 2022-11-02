#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void randArray(int*arrA){
    srand(time(NULL));
    int random = (rand() % 5)+1;
    arrA[0] = random;
    for(int i = 1 ; i < 5 ; i++){
        random = (rand() % 5)+1;
        for(int t = 1 ; t <= i ; t++){
            if(arrA[t-1] == random){
                random -= 1;
                t = 0;
            }
            if(random == 0){
                random = 5;
            }
        }
        arrA[i] = random;
    }
}

void sortArray(int*arrA){
    for(int j = 0 ; j < 5 ; j++){
        for(int i = 0 ; i < 4 ; i++){
            if(arrA[i] > arrA[i+1]){
                int temp = arrA[i];
                arrA[i] = arrA[i+1];
                arrA[i+1] = temp;
            }
        }
    }
}

void printArray(int*arrA){
        printf("[%d %d %d %d %d ]\n", arrA[0], arrA[1], arrA[2], arrA[3], arrA[4]);
}

int main(void){
    int arr[5];
    int * arrA = arr;
    randArray(arrA);
    printf("Array:");
    printArray(arrA);
    sortArray(arrA);
    printf("Sort:");
    printArray(arrA);
}