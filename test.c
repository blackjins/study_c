#include <stdio.h>


void menu_disp()
{
   printf("1.����(addition) \n,2.����(subtraction) \n, 3.����(multiplication) \n, 4������(division) \n");
   printf("���ϴ� �޴��� �����ϼ���:");
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
      printf("[����]�޴��� �� �� �Է��Ͽ����ϴ�. \n");
   return num2 / num3;
}

void Void_res_disp(double result){
        printf("������� %lf �Դϴ�.", result);
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
        printf("�� ���ڸ� �Է��ϼ���:");
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
    printf("[����]�޴��� �߸� �����ϼ̽��ϴ�.");
        break;
    }
    
}