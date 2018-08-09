#include <stdio.h>

typedef struct {
	int h, m, s;
	
	int totalSec() {
		return 3600 * h + 60 * m + s;
	}

}Time;


int main(){
	Time t = {1, 22, 48};
	int res=t.totalSec();
	
	printf("%d\n",res);
	
}

// 왜 안되니 ㅅㅂ... 
