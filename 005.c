#include <stdio.h> // ������Ʈ ���Ϸ� 5��

int main() {
	int end = 20;

	int boolean = 0;
	int i = 1;

	while (boolean == 0) {
		for (int j = 1; j < end + 1; j++) {
			if (i % j > 0) {
				j = end + 1;
			}
			if (j == end) {
				boolean = 1;
			}
		}
		printf("%d\n", i);
		i++;
	}

	printf("1 ~ %d ������ � ���ε� ������ �������� ���� ���� �� : %d\n",end , i - 1);
}

// 2 3 5 7 11 13 17 19
// 4 9
// 8
// 16
// 