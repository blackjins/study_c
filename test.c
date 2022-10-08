#include <stdio.h>

int double_add(double num1, double num2){
    return num1 + num2;
}
void main(void){
    double num1, num2, result;
    printf("두 개의 숫자를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);
    result = double_add(num1, num2);
    printf("result  %d", result);
}
