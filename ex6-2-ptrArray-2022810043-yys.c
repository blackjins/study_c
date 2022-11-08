#include <stdio.h>
#include <string.h>

int main(void){
    char arr[5][10] = {
        {"dog"},
        {"elephant"},
        {"monkey"},
        {"rabbit"},
        {"tiger"}   
    };

    char (*ptr_arr)[5] = arr;

    int lar = strlen(ptr_arr[0]);
    int lar_index_num = 0;
    for(int i = 1 ; i < 5 ; i++){
        if(lar < strlen(ptr_arr[i])){
            lar = strlen(ptr_arr[i]);
            lar_index_num = i;
        }
    }

    printf("가장 이름이 긴 동물은:%s", ptr_arr[lar_index_num]);


}