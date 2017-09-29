#include <stdio.h> // ������Ʈ ���Ϸ� 14��

int count(long long input) { // ���� ����
	int count = 1;
	long long temp = input;
	while (temp > 1) {
		if (temp % 2 == 0) {
			temp = temp / 2;
		} else if (temp % 2 == 1) {
			temp = temp * 3 + 1;
		}
		count += 1;
	}

	return count;
}

int main() {
	int high = 0;
	int high_number = 0;

	for (int i = 1; i < 1000001; i++) {
		if (high < count(i)) {
			high = count(i);
			high_number = i;
			printf("%d %d %d\n", high, count(i), high_number);
		}
	}

	printf("��ڼ� %d �� %d ���� ������ ��ħ\n", high_number, high);
	printf("%d", count(13));
}