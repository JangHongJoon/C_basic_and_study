#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[5001];
	int alpha[26]={0};
	int max=0;
	char max_alpha;
	/*
	if (getchar()==10) return 0;
	scanf("%s" ,str);
	for (int i=0; i<=strlen(str); i++){
		if (str[i]=='\0') printf("SHit");
		printf("%c\n" ,str[i]);
	}
	*/

	while (scanf("%s" ,str) != EOF){
		for (int i=0; i<strlen(str); i++){
			if ('a'<=str[i] && str[i]<='z') alpha[str[i]-97]++;
		}
		//printf("status >> %s\n" ,str);
	}
	int p=0;
	for (int i=0; i<26; i++){
		if (max<=alpha[i]){
			max=alpha[i];
		}
	}
	
	for (int i=0; i<26; i++){
		if (max==alpha[i]){
			printf("%c" ,i+97);
		}
	}
return 0;
}
