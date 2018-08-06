#include <stdio.h>

// main, printf --> 함수
// main --> () 다음 {명령어}
// printf --> () 다음 없음 

// main 함수 정의  (자료형과 함께) 


//전역변수 
int itemCnt = 0;
int money = 100;


void buyItem(int cost, int cnt){ //매개변수 
	itemCnt+=cnt;
	money -= cost;
	printf("아이템을 구매했습니다. \n");
	printf(" 아이템 개수 : %d\n" ,itemCnt);
	printf(" 잔액 : %d\n ", money);
	
} 

int main(){
	//printf 함수 호출 
	printf("Hello, World\n"); // --> <stdio.h> 에 정의 되어 있음 
	
	//지역변수 
	int a; 
	
	// {} 안의 변수들은 밖에서는 {} 밖에서는 쓸 수 없다. 
	buyItem(30,5);
	
	buyItem(50,7);
}


