#include <stdio.h>
int main(void){

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

    int result[3][3] ={
        {7, 7, 7},
        {7, 7, 7},
        {7, 7, 7}
    };

    for(int i = 0 ; i < 3 ; i++){
        printf("|");
        for (int t = 0; t < 3; t++){
            printf("%d", arr_2R_1[i][t]);
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
            printf("%d", arr_2R_2[i][t]);
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