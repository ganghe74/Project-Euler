#include <stdio.h> // 프로젝트 오일러 7번

int sosu(int min) { // min 초과, 가장 작은 소수를 찾음. ( min 은 2 이상인 정수여야 함 )
	min += 1;

	while (0 == 0) {
		for (int i = 2; i < min; i++) {
			if (min % i == 0) {
				min += 1;
				i = min;
			}
			if (i == min - 1) {
				return min;
			}
		}
	}

}

int main() {
	int value = 2;
	printf("1 번째 소수 : 2\n");

	for (int j = 2; j < 10002; j++) {
		value = sosu(value);
		printf("%d 번째 소수 : %d\n", j, value);
	}
}