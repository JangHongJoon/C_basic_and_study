#include <stdio.h>
void chline(char ch, int i, int j);

int main(){
	char a;
	int x,y;
	scanf("%c %d %d",&a,&x,&y);
	chline(a,x,y);
}

void chline(char ch, int i, int j){
	int x;
	for (x=0; x<i-1; x++){
		printf("+");
	}
	for (x=i; x<=j; x++){
		printf("%c",ch);
	}
	for (x=0; x<i; x++){
		printf("+");
	}
}

	



