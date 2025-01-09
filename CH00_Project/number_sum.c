#include <stdio.h>
/**
 * 1. 정수값 입력 받기! (Ex: 412)
 * 2. 
 * 3. 출력 : 4 + 1 + 2 = 7
 */
int main(){
    int num = 412; // 입력받은수의 모든자리의수 각 각 더해서 출력하기
    int total = 0;

    printf("숫자 : ");
    scanf("%d",&num);
    while(num>0){
        num = num/10;
    }
    printf("총합 : %d",total);
}