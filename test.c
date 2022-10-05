#include <stdio.h>

int main(void){
    int is;
    for(int cur = 2 ; cur < 10 ; cur ++){
        for(is = 1 ; is < 10 ; is ++){
            if(cur % 2 == 0 & is % 2 == 0){
                if(is > cur){
                    continue;
                }
                printf("%d*%d = %d\n", cur , is , cur*is);
            }
        }   
    }
}