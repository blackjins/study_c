#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num;
    printf("버튼 누른 횟수를 입력하시오:");
    scanf("%d", &num);
    if(num<5){
        num += 4;
    }
    if(num%4 == 0){
        printf("온도상태: %d",1);
    }
    if(num%4 == 1){
        printf("온도상태: %d",2);
    }
    if(num%4 == 2){
        printf("온도상태: %d",4);
    }
    if(num%4 == 3){
        printf("온도상태: %d",8);
    }
}
