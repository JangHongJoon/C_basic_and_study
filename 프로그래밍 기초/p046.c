#include <stdio.h>
int main(){
	/*
	R1 + 1/R2 + 1/R3 + 1/R4 + R5??
	*/
	
	//���� �� 5�� ��� ���� �迭 
	double arrR[6];
	
	int i; // for �� ����
	 
	for (i=1; i<=5; i++){
		scanf("%lf",&arrR[i]);
	}
	//����� ���� 
	double result;
	
	//���ķ� ����� ���װ� �ӽ� ��� �� ���� 
	double im;
	
	im = ((arrR[2] + arrR[3])* arrR[4]) / ((arrR[2]+arrR[3])+arrR[4]);
	
	//���� �� ��� 
	//printf("%.5f\n",im); 
	result=arrR[1] + arrR[5] + im;
	printf("%.5lf",result);
}
