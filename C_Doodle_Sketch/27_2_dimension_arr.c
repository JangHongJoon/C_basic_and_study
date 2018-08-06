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
//		* ���� :" byte
//		 
//		��ü : 24 
//		
//		�� ĭ : 4 
//		\  1   2   3  \  �� �� : 8 
//		\  4   5   6  \ 
//
//				
//	*/
//	
//	printf("%d\n" ,&arr);       	// �� ���� �ּ� �� ��� 
//	printf("%d\n" ,&arr[0]);		
//	printf("%d\n" ,&arr[0][0]);	
//	
//	
//	/*
//		
//		�迭�� �ּҴ� ù ���� (0��°) ���� �������� 
//		\  1   2   3  \ 
//		\  4   5   6  \
//	*/
//	
//	int (*ptr)[3] = &arr[0]; // 3�� ¥�� �迭 -> ������ ù��° �� 
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
	
	//�� for���� ���� �ּҰ��� ����Ѵ� --> ��? 
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
	
	
	/*              col col+1 (ĭ �ϳ��� �ּҰ�) 
		\ row     [    \    \    \    \    ] (�迭 �ϳ��� �ּҰ�) 
		\ row + 1 [    \    \    \    \    ]
		\ 
		\
		\
	*/

	
} 
