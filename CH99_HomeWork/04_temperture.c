#include <stdio.h>

int FtoC(float fVal){
    float cVal = {5.0*(fVal-32.0)/9.0};
    return cVal;
}
int main(){
    float fVal;
    printf("화씨 온도를 입력하세요 : ");
    scanf("%f", &fVal);
    float cVal = FtoC(fVal);
    printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal);
}