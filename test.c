#include <stdio.h>
#include <string.h>


int main(void){
    char arr[100] = "#$%&";
    for(int i = 0 ; i < strlen(arr) ; i++){
        printf("%d", i);
        printf("%d", strlen(arr));
        
    }
}