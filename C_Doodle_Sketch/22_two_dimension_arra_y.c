#include <stdio.h> 
int main(){
	int arr[3][4] ={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
		};
	
	
	//ÆÄ½ºÄ®ÀÇ »ï°¢Çü
	/*
	1
	1 1
	1 2 1
	1 3 3 1
	
	*/
	
	int p[10][10];
	int i,j;
	for (i=0; i<10; i++){
		for (j =0; j<=i; j++){
			if (j==0 || j==i){
				p[i][j] = 1;
			}
			else{
				p[i][j] = p[i-1][j-1] + p[i-1][j];
			}
			printf("%d ",p[i][j]);
		}
		printf("\n");
	} 
}
