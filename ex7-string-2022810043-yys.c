#include <stdio.h>
#include <string.h> 
#include <ctype.h>


int len_con(char arr[]){
    if(strlen(arr) < 8 || strlen(arr) >= 13){
        printf("���� ���̰� �ƴմϴ�(8~12��).\n");
        return 1;
    }
    return 0;
}

int digit_con(char arr[]){
    int tmp = 0;
    for (int i = 0; i < strlen(arr); i++){
        if(isdigit(arr[i]) ==0){
            tmp = 1;
        }
        else if(isdigit(arr[i]) != 0){
            tmp = 0;
            break;
        }
    }
    if(tmp == 1){
        printf("���� 1���� �̻� ���ԵǾ�� �մϴ�\n");
        return 1;
    }
    return 0;
}

int schar_con(char arr[]){
    int tmp = 0;
    for(int i = 0 ; i < strlen(arr) ; i++){
        if(35 <= arr[i] && arr[i] <= 38){
            continue;
        }
        else if(isdigit(arr[i]) == 0 && isalpha(arr[i]) == 0){
            tmp = 1;
            break;
        }
        else if(arr[i] == 0){
            break;
        }
        if(i == strlen(arr)-1){
            for(int s = 0 ; s < strlen(arr) ; s++){
                if(isdigit(arr[s]) != 0 || isalpha(arr[s]) != 0){
                    tmp = 2;
                }
            }
        }
    }
    if(tmp == 1){
        printf("Ư������(# $ %% &) �� 1���� �̻� ���ԵǾ�� �մϴ�\n");
        printf("������� ���� ���ڰ� ���ԵǾ� �ֽ��ϴ�\n");
        return 1;
    }
    else if(tmp == 2){
        printf("Ư������(# $ %% &) �� 1���� �̻� ���ԵǾ�� �մϴ�\n");
        return 1;
    }
    return 0;
}

int main(void){
    char arr[100];
    int tmp = 0;
    printf("New ID:");
    scanf("%s", &arr);
    if(len_con(arr) != 0){
        tmp = 1;
    }
    if(digit_con(arr) != 0){
        tmp = 1;
    }
    if(schar_con(arr) != 0){
        tmp = 1;
    }
    if(tmp == 0){
    printf("����� �� �ִ� ID �Դϴ�.\n");
    }
}