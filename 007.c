#include <stdio.h> // ������Ʈ ���Ϸ� 7��

int sosu(int min) { // min �ʰ�, ���� ���� �Ҽ��� ã��. ( min �� 2 �̻��� �������� �� )
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
	printf("1 ��° �Ҽ� : 2\n");

	for (int j = 2; j < 10002; j++) {
		value = sosu(value);
		printf("%d ��° �Ҽ� : %d\n", j, value);
	}
}