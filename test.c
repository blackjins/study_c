#include <stdio.h>

void genArray(double*arrA){
    for(int i = 0 ; i < 5 ; i++){
        printf("input %dth value:", i+1);
        scanf("%lf", &arrA[i]);
    }

}

double minArray(double*arrA){
    int min = arrA[0];
    for(int i = 0 ; i < 5 ; i++){
        if(min > arrA[i]){
            min = arrA[i];
        }
    }
    return min;
}

double cltoaver(double*arrA){
    double sum = 0;
    for(int i = 0 ; i < 5 ; i++){
        sum += arrA[i];
    }
    double aver = sum/5;
    double abs_min =(arrA[0] - aver) < 0 ? -(arrA[0] - aver) : (arrA[0] - aver);
    double cltoav = arrA[0];
    for(int t = 0 ; t < 5 ; t++){
        if(abs_min > (arrA[t] - aver) < 0 ? -(arrA[t] - aver) : )
    }
    return cltoav;
}

int main(void){
    double ary[5];
    genArray(ary);
    printf("genArray:");
    printf("[%.1lf %.1lf %.1lf %.1lf %.1lf ]\n", ary[0], ary[1], ary[2], ary[3], ary[4]);
    printf("Min value:");
    printf("%lf\n",minArray(ary));
    printf("Close to average value:");
    printf("%lf\n",cltoaver(ary));
}