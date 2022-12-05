#include <stdio.h>

enum status {normal, abnormal, fixed};
struct vision{
    double left;
    double right;
    enum status st;
};

int swap(double *left, double *right){
    double tmp = *left;
    *left = *right;
    *right = tmp;
}

int main(void){
    struct vision arr[5];
    int count_nor = 0;
    int count_fix = 0;
    for(int i = 0 ; i < 5 ; i++){
        printf("[%d]로보트의 시력을 입력하세요(좌 우):", i+1);
        scanf("%lf %lf", &arr[i].left, &arr[i].right);
        if(arr[i].left < arr[i].right){
            arr[i].st = 0;
        }
        else{
            arr[i].st = 1;
        }
        if(arr[i].st == 1){
            swap(&arr[i].left, &arr[i].right);
            arr[i].st = 2;
        }
        printf("로보트의 시력(좌, 우): %lf, %lf\n", arr[i].left, arr[i].right);
    }
    for(int s = 0 ; s < 5 ; s++){
        if(arr[s].st == 0){
            count_nor++;
        }
        else{
            count_fix++;
        }
    }
    printf("normal robot %d, abnormal robot %d, fixed robot %d", count_nor, 0, count_fix);
}