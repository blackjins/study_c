#include <stdio.h>

int main(void){
    int num = 0;
    printf("행의 수를 입력하시오:");
    scanf("%d", &num);
    if (num > 10){
        num = num%10;
    }
    for(int i = 0; i < num ; i++){
        for(int j = num-1 ; j > i ; j--){
        printf(" ");
    }
	    
        for(int j = 0 ; j < 2*i+1 ; j++){
	    printf("*");
    }
        printf("\n");
    }

    if(num%2 != 0){
        num = num/2;
        for(int i = 0; i < num ; i++){
            for(int j = num*2 ; j > num-1 ; j--){
                printf(" ");
            }

            for(int j = 0 ; j , j <2*(num-1) + 1 ; j++){
                printf("*");
            }

            printf("\n");
        }
    }
    else{   
    num = num/2; 
        for(int i = 0; i < num ; i++){
            for(int j = num*2-1 ; j > num-1 ; j--){
                printf(" ");
            }

            for(int j = 0 ; j , j <2*(num-1) + 1 ; j++){
                printf("*");
            }

            printf("\n");
        }
    }
    }
