#include <stdio.h>

int mul_arr(int arr_1[][3], int arr_2[][3], int result[][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int t = 0 ; t < 3 ; t++){
            for(int s = 0 ; s < 3 ; s++){
                result[i][t] += arr_1[i][s] * arr_2[s][t];
            }
        }
    }
}

void pr_result(int arr_1[][3], int arr_2[][3], int result[][3]){
    for(int i = 0 ; i < 3 ; i++){
        printf("|");
        for (int t = 0; t < 3; t++){
            printf("%d", arr_1[i][t]);
        }
        printf("|");
        if(i == 1){
            printf("    *    ");    
        }
        else{
            printf("         ");
        }
        printf("|");
        for (int t = 0; t < 3; t++){
            printf("%d", arr_2[i][t]);
        }
        printf("|");
        if(i == 1){
            printf("    =    ");    
        }
        else{
            printf("         ");
        }
        printf("|");
        for (int t = 0; t < 3; t++){
            printf("%d", result[i][t]);
        }
        printf("|");
        printf("\n");
    }
}


int main(void){
    int result[3][3] = {0};
    int arr_2R_1[3][3] ={
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    int arr_2R_2[3][3] ={
        {2, 2, 2},
        {2, 2, 2},
        {3, 3, 3}
    };

    mul_arr(arr_2R_1, arr_2R_2, result);
    pr_result(arr_2R_1, arr_2R_2, result);
    
}