#include <stdio.h> // 프로젝트 오일러 9번

int main() {
	int i, j;
	int answer[3];

	for (i = 1; i < 500; i++) {
		for (j = i; j < 1001 - 2 * i; j++) {
			if (i*i + j*j == (1000 - i - j) * (1000 - i - j)) {
				answer[0] = i;
				answer[1] = j;
				answer[2] = 1000 - i - j;
			}
		}
	}

	printf("A^2 + B^2 = C^2 를 만족하는 배열은\n");
	printf("%d^2 + %d^2 = %d^2\n", answer[0], answer[1], answer[2]);
	printf("\nA * B * C = %d\n\n", answer[0] * answer[1] * answer[2]);
}