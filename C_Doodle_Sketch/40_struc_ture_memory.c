#include <stdio.h>

typedef struct{
	int num; // 4byte
	char name[100]; // 100byte
	int cost; // 4byte
}ProductInfo;

int main(){
	ProductInfo myProduct ={479123, "���� �Ѷ��", 19900};
	
	
	//�ʱ� ���尪 ��� 
	printf("��ǰ ��ȣ : %d\n" ,myProduct.num);
	printf("��ǰ �̸� : %s\n",myProduct.name);
	printf("��     �� : %d\n",myProduct.cost); 
	printf("\n");
	
	//�ּҰ� ��� ex) 100 -> +4 -> 108 -> +100 -> 208 
	printf("��ǰ ��ȣ : %d\n" ,&myProduct.num);
	printf("��ǰ �̸� : %d\n",myProduct.name);
	printf("��     �� : %d\n",&myProduct.cost); 
	
	
} 
