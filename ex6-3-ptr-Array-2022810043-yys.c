#include <stdio.h>
void ShowOdd(int *arr[][10], int len){
    printf("홀수 출력(%d개):", len);
    for(int i = 0 ; i < len ; i++){
        printf("%d", arr[1][i]);
        if(i < len-1){
        printf(",");
        }
    }
    printf("\n");
}

void ShowEven(int *arr[][10], int len){
    printf("짝수 출력(%d개):", len);
    for(int i = 0 ; i < len ; i++){
        printf("%d", arr[0][i]);
        if(i < len-1){
        printf(",");
        }
    }
    printf("\n");
}

int main(void){
    int arr[2][10] = { 0 ,};
    int tmp = 0, even_len = 0, odd_len = 0;
    for(int i = 0 ; i < 10 ; i ++){
        printf("입력:");
        scanf("%d", &tmp);

        if(tmp % 2 == 0){
            arr[0][even_len] = tmp;
            even_len += 1;
        }
        
        else if(tmp % 2 != 0){
            arr[1][odd_len] = tmp;
            odd_len += 1;
        }
    }
    
    ShowEven(arr, even_len);
    ShowOdd(arr, odd_len);
}
