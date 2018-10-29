#include <stdio.h>
int main(){
	float gender,alchol,weight,hour;
	scanf("%f %f %f %f",&gender,&alchol,&weight,&hour);
	
	//데이터 테스트
	// printf("%f %f %f %f",gender,alchol,weight,hour);
	
	//gender 가 0 이면 0.73(남자), 1이면 0.6(여자)
	if (gender==0) gender = 0.73;
	else if (gender == 1 ) gender = 0.6; 
	
	//계산 결과값 춝력 변수 
	float result;
	
	//(A*5.14)/(R*W) - (0.015*H)
	result=(alchol*5.14)/(gender*weight);
	result-=(0.015*hour);
	if (result<0) printf("0.00000");
	else printf("%.5f",result); 
	
}
