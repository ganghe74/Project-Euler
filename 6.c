#include <stdio.h> // ������Ʈ ���Ϸ� 6��

int main() {
	int a = 0;
	int b = 0;
	for (int i = 1; i < 101; i++) {
		a += i;
	}
	a = a * a;
	for (int i = 1; i < 101; i++) {
		b += i * i;
	}
	printf("���� ���� : %d\n", a);
	printf("������ �� : %d\n", b);
	printf("%d\n", a - b);
}