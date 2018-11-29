#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i;
	int minX=1000001;
	int minY=1000001;
	int maxX=-1;
	int maxY=-1;
	int a,b;
	
	scanf("%d",&n);
	for (i=0; i<n; i++){
		scanf("%d %d",&a,&b);
		if (a>maxX && b>maxY){
			maxX=a;
			maxY=b;
	}
		
		if (a<minX && b<minY){
			minX=a;
			minY=b;
		}
	}
	
	printf("%d",(maxX-minX)+(maxY-minY));
	
	
}
