#include <stdio.h>
#include <string.h> 
#include <ctype.h>


int len_con(char arr[]){
    if(strlen(arr) < 8 || strlen(arr) >= 13){
        printf("허용된 길이가 아닙니다(8~12자).\n");
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
        printf("숫자 1문자 이상 포함되어야 합니다\n");
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
        printf("특수문자(# $ %% &) 중 1문자 이상 포함되어야 합니다\n");
        printf("허락되지 않은 문자가 포함되어 있습니다\n");
        return 1;
    }
    else if(tmp == 2){
        printf("특수문자(# $ %% &) 중 1문자 이상 포함되어야 합니다\n");
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
    printf("사용할 수 있는 ID 입니다.\n");
    }
}