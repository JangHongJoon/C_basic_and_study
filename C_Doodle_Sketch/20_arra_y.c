#include <stdio.h>

int main(){
	int a[5];
	
			//     0    1    2    3    4
	a[0]=2; // a [ 2 \\   \\   \\   \\   ]
	
	printf("%d\n" ,sizeof(a)); // 배열의 크기 5 * 4 = 20(byte) 
	
	int arr[5] = { 3, 1, 4, 5, 6 }; 
	// a [ 3 \\ 1  \\ 4  \\ 5  \\ 6  ]
	
	int i=0;
	for (i = 0; i <= 4; i++){
		printf("%d " ,arr[i]);
	}
	printf("\n"); 
	printf("\n");
	
} 
