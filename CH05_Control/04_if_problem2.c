#include <stdio.h>

int main(){
    //0~100점을 입력 받고, 학점으로 변환해서 출력하는 프로그램
    int score; // 점수(0~100)
    char grade; // 학점(A~F)

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    // 유효성 체크 : 사용자가 입력한 값이 유효한 값인지 체크
    // 1.
    //91~100
    if(score<=100 && score>=91){
        grade = 'A';
    }else if(score<=90 && score>=81){
        grade = 'B';
    }else if(score<=80 && score>=71){
        grade = 'C';
    }else if(score<=70 && score>=61){
        grade = 'D';
    }else{
        grade = 'F';
    }
    // 3. 출력부
    printf("당신의 점수는 %d으로 학점은 %c입니다.\n",score, grade);
    return 0;

}