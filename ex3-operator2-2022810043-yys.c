#include <stdio.h>

int main(void){
    int num = 0;
    int cha = 0;
    printf("���� �Է� �ϼ���.");
    scanf("%d", &num);
    num -=150;
    cha = num/500;
    num -= 500 * cha;
    printf("500�� ¥�� ���� %d��\n", cha);
    cha = num/100;
    num -= 100 * cha;
    printf("100�� ¥�� ���� %d��\n", cha);
    cha = num/50;
    num -= 50 * cha;
    printf("50�� ¥�� ���� %d��\n", cha);
    cha = num/10;
    num -= 10 * cha;
    printf("10�� ¥�� ���� %d��\n", cha);
}