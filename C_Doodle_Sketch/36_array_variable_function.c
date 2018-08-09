#include <stdio.h>

/*
void printArr(int arr[4]){ // *arr 랑 같음 
	int i;
	for (i=0; i<4; i++){
		arr[i] *= 2;
	}  
}

int main(){
	int arr[4] = {1,2,3,4};
	printArr(arr); 
	int i;
	for (i=0; i<4; i++){
		printf("%d\n" ,arr[i]);
	}
}
*/

void printArr(int arr[2][3]){ //(*arr)[3] 와 같음 
	int i,j;
	
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
} 


int main(){
	int arr[2][3] = {{1,2,3},{4,5,6}};
	printArr(arr);
}
