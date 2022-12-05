#include <stdio.h>
#include <string.h>

int con_sam_char(char arr[], char com_arr[]){
    for(int i = 0 ; i < strlen(arr) ; i++){
        if(arr[i] == com_arr[i]){
            return 0;
        }
        return 1;
    }
}


int main(void){
    printf("%s", "a"+3);
}