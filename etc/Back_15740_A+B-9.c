#include <stdio.h>
#include <string.h>
//���ڸ� ���ڿ��� �޾Ƽ� �ڸ��� ǥ�� 
char a[10002];
char b[10002];
//��� �ڸ��� ��� ���� �迭�� ���� 
int c[10010]; 

//���ڿ� �����ͷ� ���� �ǿ��� ���� ���� 
char *ptr_num1;
char *ptr_num2;

int stop1=0,stop2=0;

int main(){
	
	int aPm=1,bPm=1; // a,b�� ��� ���� ���� ���� (0 ���� 1 ���) 
	int aRealn=0, bRealn=0; //������ 1�� ��ȣ�� �� �� ���� ���� Ȯ�� 
	
	scanf("%s" ,a);
	scanf("%s" ,b);
	
	
	if (a[0]=='-') {aPm=0; aRealn=1;} //- ��ȣ �ÿ� aPm ����, �������� 1����  
	if (b[0]=='-') {bPm=0; bRealn=1;} //- ��ȣ �ÿ� bPm ����, �������� 1����
	
	int i,j;
	int zeroCnt=0;
	int cnt=0;
	
	
	
	//printf("%s: %d %d %s : %d %d\n\n",a,aPm,aRealn,b,bPm,bRealn);
	
	//���̰� a �� �� ��� a�� ���� ���ڷ� 
	if (strlen(a)-aRealn > strlen(b)-bRealn){
		ptr_num1=a;
		ptr_num2=b;
		stop1=aRealn;
		stop2=bRealn;
		//printf("a win\n");
	}
	
	//���̰� b �� �� ��� b�� ���� ���ڷ� 
	else if (strlen(a)-aRealn < strlen(b)-bRealn){
		ptr_num1=b;
		ptr_num2=a;
		stop1=bRealn;
		stop2=aRealn;
		//printf("b win\n");
	}
	
	//���̰� ������ ���ڸ� �ڸ��� �񱳷� �� ū ���� ���� 
	else{
		int i,j;
		int sameCnt=0;
		int sw=0;
		
		for (i=aRealn,j=bRealn; i<strlen(a),j<strlen(b); i++,j++){
	//		printf("%c %c\n",a[i],b[j]);
			if (a[i]>b[j]) { //a�� ���� �ڸ����� ũ�� a�� ���� ���ڷ� 
				ptr_num1=a;
				ptr_num2=b;
				stop1=aRealn;
				stop2=bRealn;
				sw=1;
				break;  
			}
			else if (a[i]<b[j]) { //b�� ���� �ڸ����� ũ�� b�� ���� ���ڷ�
				ptr_num1=b;
				ptr_num2=a;
				stop1=bRealn;
				stop2=aRealn;
				sw=1;
				break;
			}
			else sameCnt++;
						
		} 
		 
		if (sw==0 && sameCnt==strlen(a)-aRealn && sameCnt==strlen(b)-bRealn && aPm!=bPm){
			printf("0\n");
			return 0;
		}
		
		else if (sw==0 && aPm==bPm){
			ptr_num1=a;
			ptr_num2=b;
			stop1=aRealn;
			stop2=bRealn;
		}
	}
	
	
	
//	printf("!%s %d %s %d \n\n",ptr_num1,stop1,ptr_num2,stop2);
	
	
	int num1Int, num2Int;
	int im,nam=0;
	int p=0;

	
	j=strlen(ptr_num2)-1;
	for (i=strlen(ptr_num1)-1; i>=stop1; i--){
		num2Int=0;
		
		num1Int=(*(ptr_num1+i)-48);
		if (j>=stop2) num2Int=(*(ptr_num2+j)-48);
//		printf("%d %d -> ",i,j);
//		printf("%d %d : ",num1Int,num2Int);
		if (aPm!=bPm){
			if (num1Int<num2Int){
				int k;
				for (k=i-1; k>=stop1; k--){
					if (*(ptr_num1+k) == '0') *(ptr_num1+k) = '9';
					else { *(ptr_num1+k)-=1; break;}
				}
				num1Int+=10;
			}
			im=num1Int-num2Int;
//			printf("%d\n",im);
			c[p++]=im;
			
		}
		
		else{
			im=num1Int+num2Int+nam;
			nam=im/10;
			c[p++]=im%10;
			
//			printf("%d\n",im);
		}
		
		j--;
	}
	
	c[p++]=nam;
	
	int sw=1;
	if (*(ptr_num1)=='-' && *(ptr_num2)!='-' || (*(ptr_num1)=='-' && *(ptr_num2)=='-')) printf("-");
	for (i=p-1; i>=0; i--) {
		if (sw==1 && c[i]==0) continue;
		else {sw=0; printf("%d",c[i]);}	
		
	}
	
	return 0;
	
}

