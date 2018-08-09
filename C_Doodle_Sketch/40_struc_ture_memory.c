#include <stdio.h>

typedef struct{
	int num; // 4byte
	char name[100]; // 100byte
	int cost; // 4byte
}ProductInfo;

int main(){
	ProductInfo myProduct ={479123, "제주 한라봉", 19900};
	
	
	//초기 저장값 출력 
	printf("상품 번호 : %d\n" ,myProduct.num);
	printf("상품 이름 : %s\n",myProduct.name);
	printf("가     격 : %d\n",myProduct.cost); 
	printf("\n");
	
	//주소값 출력 ex) 100 -> +4 -> 108 -> +100 -> 208 
	printf("상품 번호 : %d\n" ,&myProduct.num);
	printf("상품 이름 : %d\n",myProduct.name);
	printf("가     격 : %d\n",&myProduct.cost); 
	
	
} 
