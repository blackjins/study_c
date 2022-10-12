#include <stdio.h>

void menu_disp(void){
    printf("==========< 메뉴 >==========\n");
    printf("1.덧셈(addition)\n");
    printf("2.뺄셈(subtraction)\n");
    printf("3.곱셈(multiplication)\n");
    printf("4.나눗셈(division)\n");
    printf(">>원하는 메뉴를 선택하세요:");
}

double double_add(double num1, double num2){
    return num1 + num2;
}

double double_sub(double num1, double num2){
    return num1 - num2;
}

double double_mul(double num1, double num2){
    return num1 * num2;
}

double double_div(double num1, double num2){
    if(num2 == 0 ){
        printf("[오류]0으로 나눌 수 없습니다.");
        return -1;
    }
    return num1 / num2;
}

double Void_res_disp(double result){
    if(result == -1){
        return 0;
    }
    else{
        printf("결과값은 %lf 입니다.", result);
    }
}

int main(void){
   int cas;
   double  num1, num2, result;
   menu_disp();
   scanf("%d", &cas);
   switch (cas)
    {
    case 1:
        printf("두개의 숫자를 입력해주세요.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_add(num1, num2));
        break;

    case 2:
        printf("두개의 숫자를 입력해주세요.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_sub(num1, num2));
        break;

    case 3:
        printf("두개의 숫자를 입력해주세요.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_mul(num1, num2));
        break;
    
    case 4:
        printf("두개의 숫자를 입력해주세요.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_div(num1, num2));
        break;

    default:
        printf("[오류]메뉴를 잘못 입력하였습니다.");
        break;
    }
}