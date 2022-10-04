#include <stdio.h>

int main(void){
    int num = 0;
    for(int i = 1 ; i < 10 ; i++){
        printf("2 * %d = %-5d", i , 2*i);
        printf("5 * %d = %-5d", i , 5*i);
        printf("8 * %d = %-5d", i , 8*i);
        printf("\n");
    }
}