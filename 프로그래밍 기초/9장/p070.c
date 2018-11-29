#include <stdio.h>
int testL(char x);

int main(){
	char ch;
	while ((ch=getchar())!=EOF){
		int result=testL(ch);
		if (result==-1) printf("%c is not a letter.\n",ch);
		else if (result==-2) continue;
		else printf("%c is a letter #%d.\n",ch,result);
	}
}

int testL(char x){
		//printf("%d : \n" ,x);
		if ('A'<=x && 'Z'>=x) return x-64;
		else if ('a'<=x && 'z'>=x) return x-96;
		else if (x==10 || x==' ') return -2;
		else return -1;
}
