#include <stdio.h>


void menu_disp()
{
   printf("1.덧셈(addition) \n,2.뺄셈(subtraction) \n, 3.곱셈(multiplication) \n, 4나눗셈(division) \n");
   printf("원하는 메뉴를 선택하세요:");
}

double add(double num2, double num3)
{
   return num2 + num3;
}

double sub(double num2, double num3)
{
   return num2 - num3;
}

double mul(double num2, double num3)
{
   return num2 * num3;
}

double div(double num2, double num3)
{
   if (num3 == 0)
      printf("[오류]메뉴를 잘 못 입력하였습니다. \n");
   return num2 / num3;
}

void Void_res_disp(double result){
        printf("결과값은 %lf 입니다.", result);
}

int main(void)
{
    int num;
    double num2, num3, result;
    menu_disp();
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("두 숫자를 입력하세요:");
        scanf("%lf %lf", &num2, &num3);
        result = add(num2,num3);
        Void_res_disp(result);
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    
    default:
    printf("[오류]메뉴를 잘못 선택하셨습니다.");
        break;
    }
    
}