#include <stdio.h>
int main()
{
	char str;
	int i=0;
	while (scanf("\n%c" ,&str) != EOF){
		i++;
		printf("%c" ,str);
		if (i%10==0) printf("\n");
	}
	return 0;
}