//�� ���� �޸� ���� Ȯ���ϴ� C��� �ҽ� �ڵ�C

#include <stdio.h>
//union�� ���� ��� �߿� ���� ū ��� ũ���� �޸𸮸� �Ҵ��մϴ�.
typedef union
{
    float value; //4����Ʈ
    struct
    { 
        unsigned exponent:23; //23��Ʈ
        unsigned mantissa:8; //8��Ʈ
        unsigned sign:1; //1��Ʈ
    }sv; //4����Ʈ
    unsigned iv;//4����Ʈ    
}test;
 
int main(void)
{
    test t;
    t.value = -13.625;
    printf("��ȣ��:%u\n",t.sv.sign); //%u�� ��ȣ���� ������ ���
    printf("������:%d\n",t.sv.mantissa); //%#x�� 16������ ����ϰ� �տ� 0x ǥ��
    printf("������:%d\n",t.sv.exponent);
    printf("4����Ʈ 16����:%#x\n",t.iv);    
    return 0;
}

