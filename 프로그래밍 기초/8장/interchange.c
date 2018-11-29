#include <stdio.h>
void interchange(int u, int v);

int main(){
	int x=5, y=10;
	interchange(&x,&y);
} 

void interchange(int u, int v){
	int temp;
	temp=u;
	*u=*v;
	*v=temp;
}
