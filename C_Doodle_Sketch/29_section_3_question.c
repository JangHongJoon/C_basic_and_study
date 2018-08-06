//1.
//#include <stdio.h>
//int main(){
//	int arr[100];
//	int i;
//	
//	int (*ptr_arr)[100];
//	ptr_arr=arr;
//	
//	int n;
//	scanf("%d",&n);
//	for (i=0; i<n; i++){
//		scanf("%d" , *(ptr_arr)+i);
//	}
//	
//	for (i=0; i<n; i+=2){
//		printf("%d " , arr[i]);
//	}
//	
//	printf("\n");
//	for (i=1; i<n; i+=2){
//		printf("%d " , arr[i]);
//	}
//	
//} 


//2.
/*
	30
	10
	10
	
	[풀이]
	a == 10, b == 20 이다.
	
	*ptr (포인터 변수) 가 선언되고
	
	a의 주소값을 ptr 에 넣는다.
	
	ptr에 있는 주소값을 가지고 있는 변수로 가서 30이란
	값을 준다.
	
	그러므로 a == 30 이 된다.
	
	b의 주소값을 ptr 에 넣는다.
	
	ptr에 있는 주소값을 가지고 있는 변수로 가서 10이란
	값을 준다.
	
	그러므로 b == 10 이 된다.
	
	ptr은 마지막으로 b의 주소값을 가지고 있으므로 
	*ptr은 b의 값을 가진다.
	
	그래서 
	30
	10
	10
	이 출력된다. 
*/


//3.

/*
	"arr" 배열의 주소 값 출력 (주소 값을 이하 100 으로 정함)
	112 1
	116 5
	120 9
	124 2
	(* 주소 값은 항상 변하고 주소 값이 서로 서로 차이가
	 4인 것이 핵심)
	 
 
*/


//4.

#include <stdio.h>
int main(){
	
	int arr[11][11];
	int x,y;
	scanf("%d %d",&x,&y);
	
	int i,j;
	for (i=0; i<x; i++){
		for (j=0; j<y; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int (*row)[11];  
	int *col;
	
	int hap=0;
	for (row=arr; row<arr+x; row++){
		for (col=*row; col<*row+y; col++){
			hap+=*col;
		}
		printf("%d\n",hap);
		hap=0;
	}
	 
} 
