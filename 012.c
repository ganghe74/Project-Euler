#include <stdio.h> // ������Ʈ ���Ϸ� 12��

int yaksu(int input) { // ��� ���� ���ϴ� �Լ�
	int count = 0;
	for (int i = 1; i  < input / 2 + 1; i++) {
		if (input % i == 0) {
			if (input / i < i) break;
			count += 2;
			if (input / i * input / i == input) count -= 1;
		}
	}

	return count;
}

int main() {

	int count = 1;

	while (1) {
		printf("%d ��° �ﰢ�� %d\n �� ����� %d��\n", count, count*(count + 1) / 2, yaksu(count*(count + 1) / 2));
		if (yaksu(count*(count + 1) / 2) > 499) {
			break;
		}
		count += 1;
	}

	printf("����� ���� %d �� �ﰢ�� %d\n", yaksu(count*(count + 1) / 2), count*(count + 1) / 2);

}