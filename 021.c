#include <stdio.h> // 프로젝트 오일러 21번

int yaksu(int input) { // 자신 제외 약수 더하기 ( d(n) )
	int plus = 0;
	for (int i = 1; i < input / 2 + 1; i++) {
		if (input % i == 0) {
			if (input / i < i) break;
			plus = plus + i + input / i;
			if (input / i * input / i == input) plus = plus - i;
		}
	}
	plus -= input;

	return plus;
}

int main() {
	int sum = 0;

	for (int i = 2; i < 10001; i++) {
		if (i == yaksu(yaksu(i)) && i < yaksu(i) ) {
			sum = sum + i + yaksu(i);
			printf("친화쌍 %d %d\n", i, yaksu(i));
			printf("    합 %d\n", sum);
		}
	}

	printf("최종합 : %d\n", sum);
}