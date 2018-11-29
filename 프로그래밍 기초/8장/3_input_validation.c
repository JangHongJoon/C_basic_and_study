int main(){
	int input;
	char ch;
	while (scanf("%d" ,&input)!=1){
		while ((ch=getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\n");
		
	}
	printf("Good");
} 
