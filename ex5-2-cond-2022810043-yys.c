#include <stdio.h>

int main(void){
    int num , count, fir, sec;
    count = 0;
    printf("출력종류의 번호를 입력하시오.\n");
    printf("(1:모두, 2:짝수단, 3:홀수단):");
    scanf("%d", &num); 
    switch (num)
    {
    case 1:
        for(fir = 2 ; fir < 10 ; fir ++){
            for(sec = 1 ; sec < 10 ; sec ++){
                if(fir%2 == 0 & sec % 2 == 0){
                    if(sec > fir){
                        count += 1;
                        break;
                    }
                    printf("%d*%d = %d\n", fir , sec , fir*sec);
                    count += 1;
                }
                else if(fir%2 != 0 & sec % 2 != 0){
                    if(sec > fir){
                        count += 1;
                        break;
                    }
                    printf("%d*%d = %d\n", fir , sec , fir*sec);
                    count += 1;
                }
            }
        count += 1;
        }
        printf("반복문 수행 횟수: %d", count);
        break;
    
    case 2:
        for(fir = 2 ; fir < 10 ; fir ++){
            for(sec = 1 ; sec < 10 ; sec ++){
                if(fir % 2 == 0 & sec % 2 == 0){
                    if(sec > fir){
                        count += 1;
                        break;
                    }
                    printf("%d*%d = %d\n", fir , sec , fir*sec);
                    count += 1;
                }
            }   
        count += 1; 
        }
        printf("반복문 수행 횟수: %d", count);
        break;

    case 3:
        for(fir = 2 ; fir < 10 ; fir ++){
            for(sec = 1 ; sec < 10 ; sec ++){
                if(fir % 2 != 0 & sec % 2 != 0){
                    if(sec > fir){
                        count += 1;
                        break;
                    }
                    printf("%d*%d = %d\n", fir , sec , fir*sec);
                    count += 1;
                }
            }   
        count += 1; 
        }
        printf("반복문 수행 횟수: %d", count);
        break;    
    default:
        printf("출력번호를 잘못 누르셨군요!");
    } 
}