/*  1. 음료이름 추가
	2. 음료이름 삭제
	3. 동전 추가
	4. 음료 구입
	5. 동전 반환
	6. 총 판매액
	7. 투입 금액 확인
	8. 자판기 종료		*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

char *drink_list[SIZE];

// 음료를 추가, 삭제 혹은 수정할 수 있는 기능을 가진 함수
int drink_setting() {

	int drink_number;
	char drink_name[50];

	printf("몇 번 항목을 추가하시겠습니까? ");
	scanf("%d", &drink_number);

	printf("음료 이름? ");
	scanf("%s", &drink_name);

	drink_list[drink_number] = &drink_name;
	
	return drink_number;
}

// 사용자 모드로 들어왔을 때의 메인 화면을 출력하는 함수
void bending_machine_main() {

	for (int i = 1; i <= SIZE; i++) {
		printf("%d 번 음료 : %s\n", i, drink_list[i - 1]);
	}
}

// 첫 화면에서 비밀번호를 검사하는 함수
int password_check(int num) {

	int result;

	if (num == 1234) {
		return result = 0;
	}
	else {
		if (num == 1) {
			return result = 2;
		}
		else {
			return result = 1;
		}
	}
}

// 첫 메인 화면을 출력하는 함수
int main() {

	int password = 0;

	for (int i = 0; i < 5; i++) {
		printf("비밀번호를 입력하세요 : ");
		scanf("%d", &password);

		if (password_check(password) == 0) {
			// 관리자 화면으로 넘어가기
			break;
		}
		else if (password_check(password) == 1) {
			printf("비밀번호가 틀렸습니다.");
		}
		else if (password_check(password) == 2) {
			// 사용자 화면으로 넘어가기
		}
		else {
			//프로그램 종료
		}
	}

	return 0;
}
