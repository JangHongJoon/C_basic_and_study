#include <stdio.h>
int compare(const void *a, const void *b);
int main(){
	int arr[100000];
	int n,k;
	int i;
	int left,right;
	double res1=0,res2=0;
	
	scanf("%d %d",&n,&k);
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),compare);
	for (i=k; i<n-k; i++){
		res1+=(double)arr[i];	
		if (i==k) left = arr[i];
		else if (i==n-k-1) right = arr[i];
	}
	res1/=(n-(k*2));
	

	for (i=0; i<n; i++){
		if (i<k) res2+=left;
		else if (i>=n-k-1) res2+=right;
		else res2+=arr[i];
	}
	res2/=n;
	printf("%.1lf %.1lf\n",res1,res2);
}

int compare(const void *a, const void *b){
	int num1 = * (int *) a;
	int num2 = * (int *) b;
	
	if (num1<num2) return 1;
	else if (num1==num2) return 0;
	else return -1;
}
