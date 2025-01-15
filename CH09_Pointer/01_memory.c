#include <stdio.h>

int main(){
    char a;
    int b;
    double c;
    // %u(unsigned): 기호 제거(양수)
    // %p(pointer): 16진수 주소 표현
    printf("char형 변수의 주소: %u\n", &a);
    printf("int형 변수의 주소: %u\n", &b);
    printf("double형 변수의 주소: %u\n", &c);
}