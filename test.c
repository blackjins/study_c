#include <stdio.h>
int main(void){
    int arr[2][10] = { 0 ,};
    int tmp, even_len, odd_len, i = 0;
    while(i < 10){
        printf("입력:");
        scanf("%d", &tmp);

        if(tmp % 2 == 0){
            arr[0][even_len] = tmp;
            even_len += 1;
            i += 1;
        }
        
        else if(tmp % 2 != 0){
            arr[1][odd_len] = tmp;
            odd_len += 1;
            i += 1;
        }
    }
}