#include <stdio.h>

void menu_disp(void){
    printf("==========< �޴� >==========\n");
    printf("1.����(addition)\n");
    printf("2.����(subtraction)\n");
    printf("3.����(multiplication)\n");
    printf("4.������(division)\n");
    printf(">>���ϴ� �޴��� �����ϼ���:");
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
        printf("[����]0���� ���� �� �����ϴ�.");
        return -1;
    }
    return num1 / num2;
}

double Void_res_disp(double result){
    if(result == -1){
        return 0;
    }
    else{
        printf("������� %lf �Դϴ�.", result);
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
        printf("�ΰ��� ���ڸ� �Է����ּ���.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_add(num1, num2));
        break;

    case 2:
        printf("�ΰ��� ���ڸ� �Է����ּ���.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_sub(num1, num2));
        break;

    case 3:
        printf("�ΰ��� ���ڸ� �Է����ּ���.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_mul(num1, num2));
        break;
    
    case 4:
        printf("�ΰ��� ���ڸ� �Է����ּ���.");
        scanf("%lf %lf", &num1, &num2);
        Void_res_disp(double_div(num1, num2));
        break;

    default:
        printf("[����]�޴��� �߸� �Է��Ͽ����ϴ�.");
        break;
    }
}