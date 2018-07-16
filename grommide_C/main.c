#include <stdio.h>

int main(int argc, char* argv[]) {
	char val[10][7]={{"black"},{"blue"},{"brown"}};
	char com[10][7]={{"black"},{"blue"},{"brown"}};
	char l;
	printf("%s %s" ,com[2],val[2]);
	printf("%s\n" ,val[0]);
	return 0;
}