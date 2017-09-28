#include <stdio.h> // 프로젝트 오일러 10번
				   // 시간 매우 오래걸림 !! 정답 : 142913828922
int sosu(int min) { // min 초과, 가장 작은 소수를 찾음. ( min 은 2 이상인 정수여야 함 ) - 7번 발췌
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
	long long Series = 2;
	int temp = 2;

	while (temp < 2000001) {
		temp = sosu(temp);
		Series += temp;
		printf("%d, %lld\n", temp, Series);
	}

	printf("\n\a정답 : %lld\n\n", Series);

}