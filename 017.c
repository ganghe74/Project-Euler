#include <stdio.h> // 프로젝트 오일러 17번

// 일의자리
// 1 one (3) / 2 two (3) / 3 three (5) / 4 four (4) / 5 five (4) / 6 six (3) / 7 seven (5) / 8 eight (5) / 9 nine (4)
// 십의자리
// 1 ten (3)
// 11 eleven (6) / 12 twelve (6) / 13 thirteen (8) / 14 fourteen (8) / 15 fifteen (7) / 16 sisteen (7) / 17 seventeen (9) / 18 eighteen (8) / 19 nineteen (8)
// 2 twenty (6) / 3 thirty (6) / 4 forty (5) / 5 fifty (5) / 6 sixty (5) / 7 seventy (7) / 8 eighty (6) / 9 ninety (6)
// 백의자리
// 1 one hundred and (13) / 2 two * (13) / 3 three * (15) / 4 four * (14) / 5 five * (14) / 6 six * (13) / 7 seven * (15) / 8 eight * (15) / 9 nine * (14)
// 천
// one thousand (11)

int one(int input_one) { // 입력 : 일의자리수 ( 0 ~ 9 ) / 출력 : 일의자리수 -> 영어 글자수 / 일의자리수 계산
	int temp_one = 0;
	if (input_one == 1) temp_one += 3;
	if (input_one == 2) temp_one += 3;
	if (input_one == 3) temp_one += 5;
	if (input_one == 4) temp_one += 4;
	if (input_one == 5) temp_one += 4;
	if (input_one == 6) temp_one += 3;
	if (input_one == 7) temp_one += 5;
	if (input_one == 8) temp_one += 5;
	if (input_one == 9) temp_one += 4;
	return temp_one;
}

int two(int input_two) { // 입력 : 두자리수 ( 10 ~ 99 ) / 출력 : 두자리수 -> 영어 글자수 / 두자리수 계산
	int temp_two = 0;
	if (input_two < 20) {
		if (input_two == 10) temp_two += 3;
		if (input_two == 11) temp_two += 6;
		if (input_two == 12) temp_two += 6;
		if (input_two == 13) temp_two += 8;
		if (input_two == 14) temp_two += 8;
		if (input_two == 15) temp_two += 7;
		if (input_two == 16) temp_two += 7;
		if (input_two == 17) temp_two += 9;
		if (input_two == 18) temp_two += 8;
		if (input_two == 19) temp_two += 8;
	}
	else { // 20 이상일 경우
		if (input_two / 10 == 2) { // 2 twenty (6)
			temp_two += 6;
			temp_two += one(input_two % 10);
		}
		if (input_two / 10 == 3) { // 3 thirty (6)
			temp_two += 6;
			temp_two += one(input_two % 10);
		}
		if (input_two / 10 == 4) { // 4 forty (5)
			temp_two += 5;
			temp_two += one(input_two % 10);
		}
		if (input_two / 10 == 5) { // 5 fifty (5)
			temp_two += 5;
			temp_two += one(input_two % 10);
		}
		if (input_two / 10 == 6) { // 6 sixty (5)
			temp_two += 5;
			temp_two += one(input_two % 10);
		}
		if (input_two / 10 == 7) { // 7 seventy (7)
			temp_two += 7;
			temp_two += one(input_two % 10);
		}
		if (input_two / 10 == 8) { // 8 eighty (6)
			temp_two += 6;
			temp_two += one(input_two % 10);
		}
		if (input_two / 10 == 9) { // 9 ninety (6)
			temp_two += 6;
			temp_two += one(input_two % 10);
		}
	}
	return temp_two;
}

int three(int input_three) { // 입력 : 세자리수 ( 100 ~ 999 ) / 출력 : 세자리수 -> 영어 글자수 / 세자리수 계산
	int temp_three = 0;
	if (input_three / 100 == 1) { // 1 one hundred and (13)
		temp_three += 13;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 2) { // 2 two * (13)
		temp_three += 13;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 3) { // 3 three * (15)
		temp_three += 15;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 4) { // 4 four * (14)
		temp_three += 14;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 5) { // 5 five * (14)
		temp_three += 14;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 6) { // 6 six * (13)
		temp_three += 13;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 7) { // 7 seven * (15)
		temp_three += 15;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 8) { // 8 eight * (15)
		temp_three += 15;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	if (input_three / 100 == 9) { // 9 nine * (14)
		temp_three += 14;
		if (input_three % 100 == 0) temp_three -= 3;
		else if (input_three % 100 < 10) temp_three += one(input_three % 100);
		else temp_three += two(input_three % 100);
	}
	return temp_three;
}

int caculate(int input) { // 글자 -> 영어 글자수 계산
	int temp = 0;
	if (input < 10) {
		temp += one(input);
	}
	else if (input > 9 && input < 100) {
		temp += two(input);
	}
	else if (input > 99 && input < 1000) {
		temp += three(input);
	}
	else {
		temp += 11;// one thousand (11)
	}
	return temp;
}

int main() {
	int sum = 0;
	for (int i = 1; i < 1001; i++) {
		sum += caculate(i);
		printf("%d, 합 : %d\n", i, sum);
	}
}