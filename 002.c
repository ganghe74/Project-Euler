#include <stdio.h> // 프로젝트 오일러 2번

int main() {
	int value = 1;
	int temp[2] = { 1,1 };
	int answer = 0;

	while (value <= 4000000) {
		value += temp[0];
		temp[0] = temp[1];
		temp[1] = value;
		if (value % 2 == 0) {
			answer += value;
		}
		printf("%d\t", value);
	}
	printf("\n%d\n", answer);
}