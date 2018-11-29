#include <stdio.h>
#include <string.h>
int main(){
	int n;
	int i,j;
	char str[100]={0}; 
	char com[100]={0}; 
	char res[100]={0}; 
	scanf("%d",&n);
	
	scanf("%s",str);
	for (i=1; i<n; i++){	
		scanf("%s",com);
		
		for (j=0; j<strlen(com); j++){
//			printf("%c %c\n",str[j],com[j]);
			if (str[j]!=com[j])	{
				res[j]='?';
			}
			else{
				res[j]=com[j];
			} 
		}
//		printf("\n");
//		printf("%s\n",res);
		strncpy(str,res,strlen(res));
	}
	printf("%s\n",str);
} 
