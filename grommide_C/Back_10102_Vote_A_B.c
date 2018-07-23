#include <stdio.h>
int main()
{
	int v;
	int for_A=0,for_B=0;
	char for_who[16];
	char result;
	
	scanf("%d" ,&v);
	for (int i=0; i<v; i++){
		scanf("\n%c" ,&for_who[i]);
	}
	
	//값 제대로 들어갔는지 확인
	//printf("%d\n %s" ,v,for_who);
	
	for (int i=0; i<v; i++){
		if (for_who[i]=='A') for_A++;
		else for_B++;
		
		if (for_A-for_B>0) result='A';
		else if (for_A-for_B<0) result='B';
		else if (for_A-for_B==0) result='T';
		
		//결과 전산 실시간 확인
		//printf("status >> %d %d -> %c\n",for_A,for_B,result);
	}	
	
	if (result =='T') printf("Tie\n");
	else printf("%c\n" ,result);
	
	return 0;
}