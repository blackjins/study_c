#include <stdio.h>

int main(void){
    int num = 0;
    int cha = 0;
    printf("돈을 입력 하세요.");
    scanf("%d", &num);
    num -=150;
    cha = num/500;
    num -= 500 * cha;
    printf("500원 짜리 동전 %d개\n", cha);
    cha = num/100;
    num -= 100 * cha;
    printf("100원 짜리 동전 %d개\n", cha);
    cha = num/50;
    num -= 50 * cha;
    printf("50원 짜리 동전 %d개\n", cha);
    cha = num/10;
    num -= 10 * cha;
    printf("10원 짜리 동전 %d개\n", cha);
}