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
	
	[Ǯ��]
	a == 10, b == 20 �̴�.
	
	*ptr (������ ����) �� ����ǰ�
	
	a�� �ּҰ��� ptr �� �ִ´�.
	
	ptr�� �ִ� �ּҰ��� ������ �ִ� ������ ���� 30�̶�
	���� �ش�.
	
	�׷��Ƿ� a == 30 �� �ȴ�.
	
	b�� �ּҰ��� ptr �� �ִ´�.
	
	ptr�� �ִ� �ּҰ��� ������ �ִ� ������ ���� 10�̶�
	���� �ش�.
	
	�׷��Ƿ� b == 10 �� �ȴ�.
	
	ptr�� ���������� b�� �ּҰ��� ������ �����Ƿ� 
	*ptr�� b�� ���� ������.
	
	�׷��� 
	30
	10
	10
	�� ��µȴ�. 
*/


//3.

/*
	"arr" �迭�� �ּ� �� ��� (�ּ� ���� ���� 100 ���� ����)
	112 1
	116 5
	120 9
	124 2
	(* �ּ� ���� �׻� ���ϰ� �ּ� ���� ���� ���� ���̰�
	 4�� ���� �ٽ�)
	 
 
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
