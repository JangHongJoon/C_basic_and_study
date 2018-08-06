#include <stdio.h>
//
//int main(){
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//	
//	printf("%d\n" ,sizeof(arr));       	//24
//	printf("%d\n" ,sizeof(arr[0]));		//12
//	printf("%d\n" ,sizeof(arr[0][0]));	//4
//	
//	/*
//		* 단위 :" byte
//		 
//		전체 : 24 
//		
//		한 칸 : 4 
//		\  1   2   3  \  한 줄 : 8 
//		\  4   5   6  \ 
//
//				
//	*/
//	
//	printf("%d\n" ,&arr);       	// 다 같은 주소 값 출력 
//	printf("%d\n" ,&arr[0]);		
//	printf("%d\n" ,&arr[0][0]);	
//	
//	
//	/*
//		
//		배열의 주소는 첫 번쩨 (0번째) 방을 기준으로 
//		\  1   2   3  \ 
//		\  4   5   6  \
//	*/
//	
//	int (*ptr)[3] = &arr[0]; // 3개 짜리 배열 -> 포인터 첫번째 행 
//	int i,j;
//	
//	// 1. ptr[i] == arr[i] ?
//	// 2. ptr[i][j] == arr[i][j] ?
//	// ptr == arr
//	
//	for (i=0; i<2; i++){
//		for (j=0; j<3; j++){
//			printf("%d ",ptr[i][j]);
//			
//		}
//		printf("\n");
//	} 
//	
//	
//	 
//}

int main(){
	int arr[2][3] = { {1,2,3}, {4,5,6} };
	int (*row)[3];
	int *col;
	int i;
	
	//이 for문은 행의 주소값을 출력한다 --> 왜? 
	for (i=0; i<2; i++){
		printf("%d \n", arr[i]);
	}
	
	for (row = arr; row < arr +2; row++){
		for (col = *row; col < *row + 3; col++){
			printf("%d %d\n",row,col);
			printf("%d \n",*col);
		}
		printf("\n");
	}
	
	
	/*              col col+1 (칸 하나의 주소값) 
		\ row     [    \    \    \    \    ] (배열 하나의 주소값) 
		\ row + 1 [    \    \    \    \    ]
		\ 
		\
		\
	*/

	
} 
