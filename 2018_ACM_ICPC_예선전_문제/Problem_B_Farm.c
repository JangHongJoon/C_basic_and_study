#include <stdio.h>
#include <float.h>
int main(){
	int a,b,n,w;
	
	scanf("%d %d %d %d",&a,&b,&n,&w);
//	printf("%d %d %d %d\n",a,b,n,w);
	
	/*
		x+y == n
		a*x + b*y == w
		
		ex) 100 100 2 200
			-> x+y==2 => y=2-x
			100*x + 100*(2-x) 
			== 100*x + 200 -100*x 
			== 200
			
			-> 100*x - 100*x == 0
	*/
	
	if ((w-(n*a))==0 && (b-a)==0 ) {
		int i=1;
		while (1){
			if (i*2==n){
				printf("%d %d",i,i);
				break;
			}
			i++;
		}	
	}
	
	else {
		int im=(w-(n*a))/(b-a);
		if (im<=0 || (n-im)<=0) printf("-1");
		else {
			printf("%d ",n-im); //x
			printf("%d ",im); //y
		}	
	}
	
}
