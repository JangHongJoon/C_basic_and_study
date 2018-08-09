//구조체 포인터 

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
	ProductInfo myProduct ={479123, "제주 한라봉", 20000};	
	ProductInfo otherProduct ={479134, "성주 꿀참외", 10000};
	ProductInfo *ptr_product = &myProduct;
	
	
	productSale(&myProduct ,10);
	

	
	//초기 저장값 출력 
	printf("상품 번호 : %d\n" ,(*ptr_product).num);
	printf("상품 이름 : %s\n",(*ptr_product).name);
	printf("가     격 : %d\n",(*ptr_product).cost); 
	printf("\n");
	
		productSwap(&myProduct, &otherProduct);
	printf("상품 번호 : %d\n" ,ptr_product->num);
	printf("상품 이름 : %s\n",ptr_product->name);
	printf("가     격 : %d\n",ptr_product->cost); 
	printf("\n");
	
	
	//주소값 출력 ex) 100 -> +4 -> 108 -> +100 -> 208 
	printf("상품 번호 : %d\n" ,&myProduct.num);
	printf("상품 이름 : %d\n",myProduct.name);
	printf("가     격 : %d\n",&myProduct.cost); 
	
} 
