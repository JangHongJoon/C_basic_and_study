/*
	int main(){
		int *p;
		float candy[365];
		//for more gecious type -> 같은 종류의 데이터가 365개 선언
		 
		// 초기화
		//int days[ 12] ={31,28,31,30...} 
		//int no_ data[4] //랜덤 쓰레기 값 포함 -> no zero  가정하지 말거라  
		  
		int some_data[4]={1492,1066} -> 0,1은 각각 순서대로 값 초기화, 나머지 2,3 번 방은 0으로 
		
		int days[]={31,28,31,30,31,30,31,31}; -> 원소 갯수 만큼 초기화
		
							-> 특정한 위치부터 초기화 
		int days[12]={31,28, [4] =31,30,31, [1]=29}; 
		 
		 
		int stuff[] ={1,[6]=23]}; -> 6개 방 지정 
		// p-> points address
		
		-----------------------------------------------------
		int evens[50];
		
		
		
		int oxen[4]={5,3,2,4};
		int yaks[4];
		
		yaks[4]=oaks[4] -> 한개의 데이터만 옮겨짐;
		
		
		 #include <stdio.h>
 int main(){
	int value1; 
	int arr[5];
	int value2;
	
	// 메모리에 저장할 때 배열이 아닌 것과 배열인 것을 모은다
	// arr[-1] 은 배열 앞의 주소 지정된 배열을 뜻한다. 
	int i;
	for (i=-1; i<5; i++){
		arr[i]=2*i+1;
	}	
	
	
	
	int sq[2][3] ={5,6,7,8}
	
 	-> row-major order
 	 => ----------------
 	 	|5	 |6	  |7    |
		|8    |    |    |
		---------------
	 



-------------------------------------------



	배열과 포인터 
	int x[10];
	 x==&x[0] -> 배열의 이름 = 배열의 첫번째 방의 주소 
	
	ex)
	short dates[12];
	short *pti;
	
	pti = dates; // 포인터 값의 연산	 
	
	1WORD -> 
		64bit 
	CPU <-> MAIN MEMORY	 -> 64bit 머신
	 

		 
		
		 
	}
*/
