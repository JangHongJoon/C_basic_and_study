//����ü ������ 

#include <stdio.h>

typedef struct{
	int num; // 4byte
	char name[100]; // 100byte
	int cost; // 4byte
}ProductInfo;

void productSale(ProductInfo *p, int percent){
	(*p).cost -= (*p).cost * percent / 100;
}

void productSwap(ProductInfo *a, ProductInfo *b){
	ProductInfo tmp =*a;
	*a = *b;
	*b = tmp;
} 

int main(){
	ProductInfo myProduct ={479123, "���� �Ѷ��", 20000};	
	ProductInfo otherProduct ={479134, "���� ������", 10000};
	ProductInfo *ptr_product = &myProduct;
	
	
	productSale(&myProduct ,10);
	

	
	//�ʱ� ���尪 ��� 
	printf("��ǰ ��ȣ : %d\n" ,(*ptr_product).num);
	printf("��ǰ �̸� : %s\n",(*ptr_product).name);
	printf("��     �� : %d\n",(*ptr_product).cost); 
	printf("\n");
	
		productSwap(&myProduct, &otherProduct);
	printf("��ǰ ��ȣ : %d\n" ,ptr_product->num);
	printf("��ǰ �̸� : %s\n",ptr_product->name);
	printf("��     �� : %d\n",ptr_product->cost); 
	printf("\n");
	
	
	//�ּҰ� ��� ex) 100 -> +4 -> 108 -> +100 -> 208 
	printf("��ǰ ��ȣ : %d\n" ,&myProduct.num);
	printf("��ǰ �̸� : %d\n",myProduct.name);
	printf("��     �� : %d\n",&myProduct.cost); 
	
} 
