#include <stdio.h>
int main(){
	float gender,alchol,weight,hour;
	scanf("%f %f %f %f",&gender,&alchol,&weight,&hour);
	
	//������ �׽�Ʈ
	// printf("%f %f %f %f",gender,alchol,weight,hour);
	
	//gender �� 0 �̸� 0.73(����), 1�̸� 0.6(����)
	if (gender==0) gender = 0.73;
	else if (gender == 1 ) gender = 0.6; 
	
	//��� ����� �x�� ���� 
	float result;
	
	//(A*5.14)/(R*W) - (0.015*H)
	result=(alchol*5.14)/(gender*weight);
	result-=(0.015*hour);
	if (result<0) printf("0.00000");
	else printf("%.5f",result); 
	
}
