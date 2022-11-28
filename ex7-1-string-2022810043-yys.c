#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_in(char arr[],int size, char ch){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == ch){
            return 1;
        }
    }
    return 0;
}

int main(void){
    char arr[100];
    char shorted_word[100] = "";
    int x = 0;
    printf("Input key:");
    scanf("%s", &arr);
    for(int i = 0 ; i < strlen(arr) ; i++){
        if(isupper(arr[i]) == 0){
            arr[i] = toupper(arr[i]);
        }
    }
    for(int i = 0 ; i < strlen(arr) ; i++){
        if(is_in(shorted_word, x, arr[i]) == 0){
            shorted_word[x++] = arr[i];
        }
    }
    printf("Output key:%s", shorted_word);

}