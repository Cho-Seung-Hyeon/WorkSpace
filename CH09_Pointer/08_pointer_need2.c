/**
 * 크기가 큰 배열의 경우 매개변수로 사용하게 되면
 * c언어는 call-by-value로 배열을 복사해서 매개변수로 전달(비효율적)
 * 매개변수에 포인터 변수를 사용하게 되면 배열을 복사하지 않고 전달(효율적)
 *  * 배열의 변수명은 배열의 시작주소와 동일!
 */
#include <stdio.h>

void arrSum(int arrNUM[9999]);

void arrSum(int arrNUM[9999]){
    for(int i = 0; i < 9999; i++){
        printf("%d번지: %d\n",i, arrNUM[i]);
    }
}
int main(){
    int arrNUM[9999] = {0};
    arrSum(arrNUM);
}
