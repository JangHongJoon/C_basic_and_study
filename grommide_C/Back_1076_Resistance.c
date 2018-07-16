#include <stdio.h>
#include <string.h>

int main(){
	char paint[11][11]={{"black"},{"brown"},{"red"},{"orange"},{"yellow"},{"green"},
						{"blue"},{"violet"},{"grey"},{"white"}};
	char input_paint[11];
	unsigned long int resist_value[10];
	unsigned long int multiply[10];
	unsigned long int oum=0;
	unsigned long int p=0;
	
	//저항 값, 곱해야 하는 값 입력
	for(unsigned long int i=1; i<=1000000000; i=i*10){
		resist_value[p]=p;
		multiply[p]=i;
		p++;	
	}
	
	
	// 값 맞는지 확인
	/*
	printf("색    값       곱\n");
	for(int i=0; i<10; i++){
		printf("%s          %ld       %ld\n",paint[i],resist_value[i],multiply[i]);
	}
	*/
	p=10;
	for (int j=0; j<2; j++){
		scanf("%s" ,&input_paint);
		for(int i=0; i<10; i++){
			if (input_paint[0] == paint[i][0] && input_paint[1] == paint[i][1] && input_paint[2] == paint[i][2] && input_paint[3] == paint[i][3]){
				oum+=p*resist_value[i];
				p/=10;
				break;
			}
		}
	}
	
	scanf("%s" ,&input_paint);
	for(int i=0; i<10; i++){
			if (input_paint[0] == paint[i][0] && input_paint[1] == paint[i][1] && input_paint[2] == paint[i][2] && input_paint[3] == paint[i][3]){
				oum*=multiply[i];
				break;
			}
		}
	
	printf("%ld\n" ,oum);
	return 0;
}