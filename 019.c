#include <stdio.h> // 프로젝트 오일러 19번

// 1900년 1월 1일은 월요일
// 4월, 6월, 9월, 11월은 30일까지 있고, 1월, 3월, 5월, 7월, 8월, 10월, 12월은 31일까지 있다.
// 2월은 28일이지만, 윤년에는 29일까지 있다.
// 윤년은 연도를 4로 나누어 떨어지는 해를 말한다.
// 하지만 400으로 나누어 떨어지지 않는 매 100년째는 윤년이 아니며,
// 400으로 나누어 떨어지면 윤년이다

// 20세기 (1901년 1월 1일 ~ 2000년 12월 31일) 에서, 매월 1일이 일요일인 경우는 총 몇 번입니까?

int yoon(int input) { // 윤년계산 (return 0 : 윤년 X // 1 : 윤년 O)
	if (input % 4 == 0) { // 4로 나누어떨어지고
		if (input % 100 == 0) { // 100으로 나누어떨어지고
			if (input % 400 == 0) { // 400으로 나누어떨어지면
				return 1; // 윤년입니다
			}
			return 0; // 윤년이 아닙니다
		}
		return 1; // 윤년입니다
	}
	return 0; // 윤년이 아닙니다
}

int main(int argc, char* argv[]) {
	int year = 1900;
	int month = 1;
	int day = 1;
	int yo = 1; // 나머지 0 : 일 1 : 월, 2 : 화, 3 : 수, 4 : 목, 5 : 금, 6 : 토
	int count = 0;

	while (year < 2001) { //
		if (day > 27) { // 날짜가 28일 이상이면 달 계산 실행
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { // 1,3,5,7,8,10,12 AND 32일 -> 1일 , 달 +
				if (day == 32) {
					day = 1;
					month += 1;
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) { // 4,6,9,11 AND 31일 -> 1일 , 달 +
				if (day == 31) {
					day = 1;
					month += 1;
				}
			}
			else if (month == 2) { // 2월이고
				if (yoon(year) == 0 && day == 29) { // 윤년 X AND 29일 -> 1일 , 달 +
					day = 1;
					month += 1;
				}
				if (yoon(year) == 1 && day == 30) { // 윤년 O AND 30일 -> 1일 , 달 +
					day = 1;
					month += 1;
				}
			}
		}

		if (month == 13) {
			month = 1;
			year += 1;
		}

		if (day == 1 && year > 1900 && year < 2001) { // 1일 (AND 1901.1.1 ~ 2000.12.31) 이면 COUNT 계산 실행
			if (yo % 7 == 0) {
				printf("%d년 %d월 1일은 일요일  COUNT !! \n", year, month);
				count++;
			}
			if (yo % 7 == 1) printf("%d년 %d월 1일은 월요일\n", year, month);
			if (yo % 7 == 2) printf("%d년 %d월 1일은 화요일\n", year, month);
			if (yo % 7 == 3) printf("%d년 %d월 1일은 수요일\n", year, month);
			if (yo % 7 == 4) printf("%d년 %d월 1일은 목요일\n", year, month);
			if (yo % 7 == 5) printf("%d년 %d월 1일은 금요일\n", year, month);
			if (yo % 7 == 6) printf("%d년 %d월 1일은 토요일\n", year, month);
		}

		// printf("현재는 %d년 %d월 %d일\n", year, month, day);

		day++;
		yo++;
	}

	printf("\n1월 1일이 일요일인 경우는 총 %d 번\n", count);

	return 0;
}