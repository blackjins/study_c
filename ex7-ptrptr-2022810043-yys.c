#include <stdio.h>
void str_prn(char **dptr_arr, int len){
    for(int i = 0 ; i < len ; i++){
        printf("%s\n", *(dptr_arr+i));
    }
}

int main()
    {
    char *ptr_ary[]={"eagle", "tiger", "lion", "squirrel"};
    int count;
    count=sizeof(ptr_ary)/sizeof(ptr_ary[0]);
    
    str_prn(ptr_ary, count);

return 0;
}