#include <stdio.h>

int main(void){
    int num , count, fir, sec;
    count = 0;
    printf("��������� ��ȣ�� �Է��Ͻÿ�.\n");
    printf("(1:���, 2:¦����, 3:Ȧ����):");
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
        printf("�ݺ��� ���� Ƚ��: %d", count);
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
        printf("�ݺ��� ���� Ƚ��: %d", count);
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
        printf("�ݺ��� ���� Ƚ��: %d", count);
        break;    
    default:
        printf("��¹�ȣ�� �߸� �����̱���!");
    } 
}