#include <stdio.h> // 프로젝트 오일러 15번

int how_many = 21;
long long road[21][21];

void display() {
	int a, b;
	for (a = 0; a < how_many; a++) {
		for (b = 0; b < how_many; b++) {
			printf("%lld ", road[a][b]);
		}
		printf("\n");
	}
}

int main() {
	int i, j;
	road[0][0] = 1;
	
	printf("%lld\n", road[0][0]);

	for (i = 0; i < how_many; i++) {
		road[0][i] = 1;
		road[i][0] = 1;
	}
	display();

	for (i = 1; i < how_many; i++) {
		for (j = 1; j < how_many; j++) {
			road[i][j] = road[i - 1][j] + road[i][j - 1];
		}
	}

	printf("정답 : %lld\n", road[how_many - 1][how_many - 1]);
}