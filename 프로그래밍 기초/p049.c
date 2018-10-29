#include <stdio.h>
#define OR 1
#define AND 2
#define NOR 3
#define NAND 4
#define XOR 5

int f(int x, int y, int gate){
//	printf ("%d ",gate);
	if (gate==OR) return (x | y);
	else if (gate==AND) return (x & y);
	else if (gate==NOR) return !(x | y);
	else if (gate==NAND) return !(x & y);
	else if (gate==XOR) return (x ^ y);
}

void makeBinary(int i, int arr[]){
	int p=4;
	while (p!=-1){
		arr[p]=i%2;
		i=i/2;
		p-=1;
	}
}

int main(){
	int v,w,x,y,z;
	int gateA,gateB,gateC;
	//테스트 for gateA 
//	printf("%d",f(v,w,gateA));
 	
 	int i;
 	int binArr[5]={0};
 	int cnt=0;
	scanf("%d %d %d",&gateA,&gateB,&gateC);
	for (i=0; i<=31; i++){
 		makeBinary(i,binArr);
		v=binArr[0];
		w=binArr[1];
		x=binArr[2];
		y=binArr[3];
		z=binArr[4];
//		printf("%d : %d%d%d%d%d\n",i,binArr[0],binArr[1],binArr[2],binArr[3],binArr[4]);
		

		int firstStageVW=f(v,w,gateA); //gateA 값  따라 출력값 저장 
//		printf("%d ",firstStageVW);
		int firstStageXY= !(x & y); //NAND 
//		printf("%d ",firstStageXY);
		int firstStageYZ=f(y,z,gateB); // gateB 값 따라 출력값 저장 
//		printf("%d ",firstStageYZ);
		
		int secondStageVWXY= !(firstStageVW | firstStageXY); // NOR
//		printf("%d ",secondStageVWXY);
		int secondStageXYZ=f(firstStageXY,firstStageYZ,gateC); // gateC 값 따라 출력값 저장
//		printf("%d ",secondStageXYZ);
		
		int f=(secondStageVWXY ^ secondStageXYZ); 
//		printf("%d \n",f);
		if (f==1) {
//			printf("!\n"); 
			cnt++;
		}
//		else printf("\n");
	}
	printf("%d",cnt);
}
