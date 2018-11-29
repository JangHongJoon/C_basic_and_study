#include <stdio.h>
void chline(char ch, int i, int j);

int main(){
	char ch;
	int i,j;
	scanf("%c %d %d",&ch,&i,&j);
	chline(ch,i-1,j-i+1);
}

void chline(char ch, int i, int j){
	if (j==0) return ;
	else if (i==0) {
		chline(ch,i,j-1);
		putchar(ch);
		return ;	
	}	

	printf("+");
	chline(ch,i-1,j);
	printf("+");
	
}

	



