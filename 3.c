#include <stdio.h> // 프로젝트 오일러 3번

int main() {
	long long target = 600851475143;

	for (int i = 1; i < target; i++) {
		if (target % i == 0) {
			target = target / i;
			printf("%lld,%d\n", target, i);
			i = 1;
		}
	}

	printf("\n%lld\n", target);
}