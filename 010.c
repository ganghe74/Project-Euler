#include <stdio.h> // ������Ʈ ���Ϸ� 10��
				   // �ð� �ſ� �����ɸ� !! ���� : 142913828922
int sosu(int min) { // min �ʰ�, ���� ���� �Ҽ��� ã��. ( min �� 2 �̻��� �������� �� ) - 7�� ����
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

	printf("\n\a���� : %lld\n\n", Series);

}