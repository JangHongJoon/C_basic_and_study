#include <stdio.h>
int main()
{
	int n;
	int front_num,back_num;
	int ordinary_fnum, ordinary_bnum;
	int hap;
	int cnt=0;
	
	scanf("%d" ,&n);
	
	// 두 자리 수를 10의 자리와 1의 자리로 나눈다.
	front_num=n/10;
	back_num=n%10;
	
	// 값이 정확한지 출력
	// printf("front_num: %d back_num : %d\n" ,front_num,back_num);
	
	// 원래 두 자리 수를 ordinary_fnum, ordinary_bnum에 입력
	ordinary_fnum=front_num;
	ordinary_bnum=back_num;
	
	//값이 정확한지 출력
	// printf("ordinary_fnum : %d ordinary_bnum: %d\n" ,ordinary_fnum,ordinary_bnum);
	

	//각각의 두 수의 합을 hap 에 저장
	while (1){
		
	
		hap=front_num+back_num;
		
		//더한 횟수 cnt에 누적
		cnt+=1;

		//십의 자리 수에 해당하는 front_num 에 back_num 값을 입력
		//일의 자리 수에 해당하는 back_num 에 hap % 10 값을 입력
		front_num=back_num;
		back_num=hap%10;

		//값이 유지되는지 출력
		// printf("maintain >> ordinary_fnum : %d ordinary_bnum : %d\n" ,ordinary_fnum, ordinary_bnum);

		//값이 정확한지 출력
		// printf("changed >> front_num : %d back_num : %d\n" ,front_num,back_num);

		// 만약 처음 두 수와 현제 두 수가 같다면
		if (ordinary_fnum == front_num && ordinary_bnum == back_num){
			// 조건문에 몇 번 더했는지 나타내고 끝
			printf("%d\n" ,cnt);
			break;
		}
		
	}
	
	return 0;
}