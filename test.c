#include <stdio.h>
#include <string.h>

int test(){
    printf("test");
    return 0;
}


int main(void){
    test();
    if(test() == 0){
        printf("Sswdw");
    }
}