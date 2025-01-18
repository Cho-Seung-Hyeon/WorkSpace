#include <stdio.h>

struct student{ // 1. 구조체 선언
    int num; // - num 멤버 변수 선언
    double grade; // - grade 멤버 변수 선언
}; // - 세미콜론(;) 사용
int main(){
    struct student s1; // 구조체 변수 선언

    // 3. 구조체 변수 사용
    s1.num = 2;
    s1.grade = 4.2;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);
}