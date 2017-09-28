#include <stdio.h> // 프로젝트 오일러 6번

int main() {
	int a = 0;
	int b = 0;
	for (int i = 1; i < 101; i++) {
		a += i;
	}
	a = a * a;
	for (int i = 1; i < 101; i++) {
		b += i * i;
	}
	printf("합의 제곱 : %d\n", a);
	printf("제곱의 합 : %d\n", b);
	printf("%d\n", a - b);
}