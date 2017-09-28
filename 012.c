#include <stdio.h> // 프로젝트 오일러 12번

int yaksu(int input) { // 약수 개수 구하는 함수
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
		printf("%d 번째 삼각수 %d\n 의 약수는 %d개\n", count, count*(count + 1) / 2, yaksu(count*(count + 1) / 2));
		if (yaksu(count*(count + 1) / 2) > 499) {
			break;
		}
		count += 1;
	}

	printf("약수의 갯수 %d 인 삼각수 %d\n", yaksu(count*(count + 1) / 2), count*(count + 1) / 2);

}