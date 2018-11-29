#include <stdio.h>
int main(){
	unsigned long long max=0;
	unsigned long long arr[1000]={0};
	unsigned long long k;
	unsigned long long price=0;
	int n,m;
	int i,j;
	int number,day;
	
	scanf("%d %d",&n,&m);
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf("%llu",&k);
			price+=k;
			arr[j]+=k;
		}
		if (price>=max) {
			max=price;
			number=i;	
		}
		price=0;
	}
	printf("%d %llu\n",number+1,max);
	
	max=0;
	for (i=0; i<m; i++){
		if (arr[i]>=max){
			 max=arr[i];
			 day=i;
		}
	}
	printf("%d %llu",day+1,max);
//	
//	max=0;
//	for (i=0; i<m; i++){
//		for (j=0; j<n; j++){
//			price+=arr[j][i];
//		}
//		if (price>max) {
//			max=price;
//			day=i;	
//		}
//		price=0;
//	}
//	printf("%d %llu",day+1,max);
}
