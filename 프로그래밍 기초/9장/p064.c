#include <stdio.h>
#include <float.h>
int main(){
	int a,b,n,w;
	int cnt=0;
	int i;
	int sheep;
	int goat;
	scanf("%d %d %d %d",&a,&b,&n,&w);
	
	for (i=1; i<n; i++){
		if ((a*i)+(b*(n-i))==w) {
			sheep=i;
			goat=n-i;
			cnt++;
		}
	}
	
	if (cnt==0 || cnt>=2) printf("-1");
	else printf("%d %d",sheep,goat);
	
}
