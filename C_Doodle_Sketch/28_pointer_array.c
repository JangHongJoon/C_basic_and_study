//포인터 배열 : 포인터들이 배열
// 배열 포인터 : 배열을 가리키는 포인터 

// 배열 포인터 개념도
 
//	배열 포인터  	100
// [100  ]  --->       [   \    \    \   \   \  ]


//포인터 배열 개념도

// 포인터가 배열 형태로 ( 모든 방이 포인터 ) 
// [    \     \     \     \    \    \     ]
// 특정한 램의 위치를 가리킴

//  [    \     \     \     \    \    \     ]
//			서로 대응하는 경우 
// [    \     \     \     \    \    \     ]

#include <stdio.h>
int main(){
//	// 포인터 배열 선언
//	int (*ptrrr)[4]; //4개 짜리 int 형 배열을 가리키는 포인터
//	int *ptr[4];// 포인터 배열은 그냥 배열 포인터에서 괄호 뻄 
//	
//	int a=10;
//	int b=20;
//	int c=30;
//	int d=40;
//	
//	ptr[0] = &a;
//	ptr[1] = &c;
//	ptr[2] = &d;
//	ptr[3] = &b;
//	
//	// 10 30 40 20 
//	printf("%d %d %d %d\n", *ptr[0] ,*ptr[1] ,*ptr[2] ,*ptr[3]); 
//
//	
//
//	int arr[4]= {1,2,3,4};
//	int *ptr[4];
//	int i;
//	
//	for (i=0; i<4; i++){
//		ptr[i] = &arr[i];
//	}
//	
//	for (i=0; i<4; i++){
//		printf("%d ",*ptr[i]);
//	}
//	printf("\n");
//	
//	/*		100  104    108 ...
//		arr[    \     \     \     \    \    \     ]
//		
//		(1 대 1 대응) 
//		
//		ptr[100 \104  \108  \...  \    \    \     ] 
//	*/
//	
//	

//	char str[] = "Hello";
//	printf("%s\n",&str[0]); 
//	// null 문자가 나올 때 까지 
////	str[    \     \     \     \    \    \  '\0']
//
//	char strings[3][10] = {"Hello","World","Doodle"};
//	int i;
//	for (i=0; i<3; i++){
//		printf("%s\n" ,strings[i]);
//	} 
//	
//	/*
//	strings
//	[  H  \  e   \  l   \  l   \  o  \    \     ]
//	[    \     \     \     \    \    \     ]
//	[    \     \     \     \    \    \     ]
//	*/
//	

	char strings[3][10] = {"Hello","World","Doodle"};
	char *p_str[3];
	int i;
	for (i=0; i<3; i++){
		p_str[i]=strings[i];
	}
	// strings의  첫번쩨 주소값을 하나 하나 
	// 포인터 배열에 넣어준다. 
	
	for (i=0; i<3; i++){
		printf("%s\n",p_str[i]);
	}

} 
