#include <stdio.h> // ������Ʈ ���Ϸ� 21��

int yaksu(int input) { // �ڽ� ���� ��� ���ϱ� ( d(n) )
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
			printf("ģȭ�� %d %d\n", i, yaksu(i));
			printf("    �� %d\n", sum);
		}
	}

	printf("������ : %d\n", sum);
}