#include <stdio.h>
int main(){
	/*
	R1 + 1/R2 + 1/R3 + 1/R4 + R5??
	*/
	
	//저항 값 5개 담기 위한 배열 
	double arrR[6];
	
	int i; // for 문 변수
	 
	for (i=1; i<=5; i++){
		scanf("%lf",&arrR[i]);
	}
	//결과값 변수 
	double result;
	
	//병렬로 연결된 저항값 임시 계산 및 저장 
	double im;
	
	im = ((arrR[2] + arrR[3])* arrR[4]) / ((arrR[2]+arrR[3])+arrR[4]);
	
	//병렬 값 출력 
	//printf("%.5f\n",im); 
	result=arrR[1] + arrR[5] + im;
	printf("%.5lf",result);
}
