/**
 * 배열요소(아이템) 접근 방법
 * int *pa // 101번지
 * 1. 정수연산 pa+1   101+1(int:4byte) -> 105번지(2번째 요소)
 * 2. 간접참조연산 *(pa+1)              -> 105번지 간접참조(2번째 요소)
 * 3. 배열요소 표현식 pa[1]              -> 배열[1] 인덱스(2번째 요소)
 */
#include <stdio.h>
int main(){
    int ary[3]; // 정수형 배열 선언
    int *pa = ary; // 포인터 변수 선언 및 초기화

    *pa = 10; // 배열의 [0] 요소에 10을 대입
    *(pa+1) = 20; // 배열의 [1] 요소에 20을 대입
    pa[2] = pa[0] + pa[1]; // 배열의 [2] 요소에 [0] + [1] 요소의 합을 대입

    for(int i=0; i<3; i++){
        printf("%d\n", pa[i]); // 배열의 요소 출력
    }
}