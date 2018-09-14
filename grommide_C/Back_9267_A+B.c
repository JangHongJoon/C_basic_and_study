#include <stdio.h>
#include <string.h>

char a[21],b[21],c[21];
char r[23];
char *ptrAb;
int main(){
	int fnum1,fnum2,nam=0,im;
	int sw=0;
	
	scanf("%s %s %s",a,b,c);
	
	strcpy(r,a);
	
	if (sw==0) {
		ptrAb=b;
		sw=1;	
	}
	else{
		ptrAb=a;
		sw=0;	
	}

	int i;
	int j=strlen(ptrAb)-1;
	
	for (i=strlen(r)-1; i>=0; i--){
		fnum1=r[i]-48;
		if (j!=-1) fnum2=*(ptrAb+j)-48;
		
		im=fnum1+fnum2+nam;	
		if (im>=10){
			r[i]=im%10;
			nam=1;
		}
		else nam=0;
		j--;
	}
	
	
	
	
	printf("%s",r);
} 


