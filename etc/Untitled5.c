//수 형식 메모리 구조 확인하는 C언어 소스 코드C

#include <stdio.h>
//union은 내부 멤버 중에 제일 큰 멤버 크기의 메모리를 할당합니다.
typedef union
{
    float value; //4바이트
    struct
    { 
        unsigned exponent:23; //23비트
        unsigned mantissa:8; //8비트
        unsigned sign:1; //1비트
    }sv; //4바이트
    unsigned iv;//4바이트    
}test;
 
int main(void)
{
    test t;
    t.value = -13.625;
    printf("부호부:%u\n",t.sv.sign); //%u는 부호없는 정수로 출력
    printf("지수부:%d\n",t.sv.mantissa); //%#x는 16진수로 출력하고 앞에 0x 표시
    printf("가수부:%d\n",t.sv.exponent);
    printf("4바이트 16진수:%#x\n",t.iv);    
    return 0;
}

