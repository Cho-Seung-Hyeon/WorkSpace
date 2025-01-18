#include <stdio.h>
struct profile{
    int age;
    double height;  
};
struct student{
    struct profile pf;
    int id;
    double grade;
};
// student 구조체 내에 멤버변수로 profile 구조체를 선언
int main(){
    struct student s1;

    s1.pf.age = 25;
    s1.pf.height = 195.0;
    s1.id = 99;
    s1.grade = 4.5;

    printf("나이 : %d\n", s1.pf.age);
    printf("키 : %.1lf\n", s1.pf.height);
    printf("학번 : %d\n", s1.id);
    printf("학점 : %.1lf\n", s1.grade);
}