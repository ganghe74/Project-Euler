#include <stdio.h>	// 프로젝트 오일러 1번

int main() {
	int count = 0;
	int i = 0;
	for (i = 0; 3 * i < 1000; i++) { //
		count += 3 * i;
	}
	for (i = 0; 5 * i < 1000; i++) {
		count += 5 * i;
	}
	for (i = 0; 15 * i < 1000; i++) {
		count -= 15 * i;
	}
	printf("%d\n", count);
	return 0;
}