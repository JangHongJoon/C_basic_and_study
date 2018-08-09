//상수 : 변하지 않는 수 

/*
#include <stdio.h>

#define PI 3.14159 // 매크로 

int main(){ 
	// const float PI=3.141592  
	// --> pi 는 float 형의 상수 입니다 
	
	printf("π= %.2lf\n",PI);
	// printf("&PI = %d\n",&PI); 
	// --> #define 은 절대 주소값 할당을 안해줌
	
	//PI =0 ==> 3.141592 =0 과 같으니 안됨 
}

*/

#include <stdio.h>

enum EGAMESTATE{
	GAME_STATE_MAINMENU, // =0 같은 값 지정 생략 가능 
	GAME_STATE_PLAYING ,
	GAME_STATE_PAUSED,
	GAME_STATE_GAMEOVER;
};


int main(){
	int currState = GAME_STATE_MAINMENU;
	
	while (true){
		switch (currState){
			case GAME_STATE_MAINMENU:
				break;
				
			case GAME_STATE_PLAYING:
				break;
			
			case GAME_STATE_PAUSED:
				break;
			
			case GAME_STATE_GAMEOVER:
				break;
			
		}
	}
} 
