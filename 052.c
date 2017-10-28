#include <stdio.h> // 프로젝트 오일러 52번

int square(int input_square) { // 출력값 : 10의 입력값만큼 제곱
	int temp_square = 1;
	for (int j = 0; j < input_square; j++) {
		temp_square = temp_square * 10;
	}
	return temp_square;
}

int plus(int input) { // 각 자리수의 합을 구함.
	int temp_plus = 0;
	for (int i = 1; input / square(i - 1) > 0; i++) {
		temp_plus += (input % square(i)) / square(i-1);
		input = input - input % square(i);
	}
	return temp_plus;
}

int time(int input_time) { // 각 자리수의 곱을 구함. (0제외)
	int temp_time = 1;
	for (int l = 1; input_time / square(l - 1) > 0; l++) {
		if ((input_time % square(l)) / square(l - 1) > 0) temp_time *= (input_time % square(l)) / square(l - 1);
		input_time = input_time - input_time % square(l);
	}
	return temp_time;
}

int jari(int input_jari) { // 입력값이 몇자리수인지 구함.
	int temp_jari = 1;
	while (input_jari / square(temp_jari) > 0) {
		temp_jari += 1;
	}

	return temp_jari;
}

int main() {

	int temp = 1;
	
	while (1) {
		if (plus(temp) == plus(temp * 2) && plus(temp) == plus(temp * 3) && plus(temp) == plus(temp * 4) && plus(temp) == plus(temp * 5) && plus(temp) == plus(temp * 6) && jari(temp) == jari(temp * 6) ) {
			if (jari(temp) == jari(temp * 6)) {
				if (time(temp) == time(temp * 2) && time(temp) == time(temp * 3) && time(temp) == time(temp * 4) && time(temp) == time(temp * 5) && time(temp) == time(temp * 6)) {
					printf("\n%d %d %d %d %d %d\n", temp, temp * 2, temp * 3, temp * 4, temp * 5, temp * 6);
					break;
				}
			}
		}
		printf("%d False\n", temp);
		temp += 1;
	}

	printf("\n정답 : %d\n", temp);
	printf("%d %d %d %d %d %d\n", temp, temp * 2, temp * 3, temp * 4, temp * 5, temp * 6);

}