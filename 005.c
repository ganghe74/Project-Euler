#include <stdio.h> // 프로젝트 오일러 5번

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

	printf("1 ~ %d 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수 : %d\n",end , i - 1);
}

// 2 3 5 7 11 13 17 19
// 4 9
// 8
// 16
// 