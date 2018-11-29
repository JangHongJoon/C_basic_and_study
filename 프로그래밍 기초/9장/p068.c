#include <stdio.h>

double f(double b[]);
int main(){
	double arr[3];
	while ((scanf("%lf %lf %lf",&arr[0],&arr[1],&arr[2]))==3){
		f(arr);
		printf("%lf %lf %lf\n" ,arr[0],arr[1],arr[2]);
	}
	
} 

double f(double b[]){
	int i,j;
	double temp;
	for (i=0; i<2; i++){
		for (j=i+1; j<3; j++){
			if (b[i]>b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
}
