#include <stdio.h> // 프로젝트 오일러 4번

int test(int a, int b) {   // 대칭수 판별
	int test[6] = { 0 }; // 10,000 ~ 1,000,000
	int input = a * b;
	if (9999 < input && input < 100000) {
		test[4] = input % 10;
		input -= input % 10;
		test[3] = input % 100 / 10;
		input -= input % 100;
		test[2] = input % 1000 / 100;
		input -= input % 1000;
		test[1] = input % 10000 / 1000;
		input -= input % 10000;
		test[0] = input % 100000 / 10000;
		if (test[4] == test[0] && test[3] == test[1]) {
			printf("대칭수 : %d X %d = %d\n", a, b, a*b);
			printf("%d %d %d %d %d /5자리\n", test[0], test[1], test[2], test[3], test[4]);
			return a * b;
		}
	}
	if (99999 < input && input < 1000000) {
		test[5] = input % 10;
		input -= input % 10;
		test[4] = input % 100 / 10;
		input -= input % 100;
		test[3] = input % 1000 / 100;
		input -= input % 1000;
		test[2] = input % 10000 / 1000;
		input -= input % 10000;
		test[1] = input % 100000 / 10000;
		input -= input % 100000;
		test[0] = input % 1000000 / 100000;
		if (test[5] == test[0] && test[4] == test[1] && test[3] == test[2]) {
			printf("대칭수 : %d X %d = %d\n", a, b, a*b);
			printf("%d %d %d %d %d %d /6자리\n", test[0], test[1], test[2], test[3], test[4], test[5]);
			return a * b;
		}
	}
	return 0;
}

int main() {
	int high[3] = { 1,1,1 };
	int temp[3] = { 0 };

	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			temp[0] = test(i, j);
			temp[1] = i;
			temp[2] = j;
			if (temp[0] > high[0]) {
				high[0] = temp[0];
				high[1] = temp[1];
				high[2] = temp[2];
			}
		}
	}
	printf("\nEND\n");
	printf("%d * %d = %d", high[1], high[2], high[0]);
}