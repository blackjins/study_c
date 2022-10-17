#include <stdio.h>

int Sum(int num){
    int result = 0;
    for(int i = 0 ; i < num+1 ;  i++){
        result += i; 
    }
    return result;
    
}

int RecursiveSum(int num_2){
    
    if (num_2 == 1){
        return 1;
    }
    return num_2 + RecursiveSum(num_2-1);
}

int main(void){
    int input;
    printf("input N:");
    scanf("%d", &input);
    printf("Sum: %d\n", Sum(input));
    printf("RecursiveSum: %d", RecursiveSum(input));
}