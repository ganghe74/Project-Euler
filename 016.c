#include <stdio.h> // ������Ʈ ���Ϸ� 16��

char value[1000]; // [0] : 1�� �ڸ�, [1] : 10���ڸ� , [2] .......
int size = 1;

void display(char in[1000]) { // ���� 0�� ���ڿ� '0'���� �ٲپ �����
	int k = 0;
	char temp[1000];
	for (k = size - 1; k > -1; k--) {
		temp[k] = in[k];
		temp[k] += '0';
		printf("%c", temp[k]);
	}
	printf("(%d)\n", size);
}

void dable() { // value ���� ( x 2 )
	for (int i = size - 1; i > -1; i--) {
		value[i] = value[i] * 2;
		if (value[i] > 9) {
			value[i] = value[i] - 10;
			value[i + 1] += 1;
		}
	}
	if (value[size] > 0) {
		size += 1;
	}
}

int main() {
	int l;
	int sum = 0;
	value[0] = 1;
	
	for (l = 1; l < 1001; l++) {
		printf("2�� %d���� : ", l);
		dable();
		display(value);
	}

	for (l = 0; l < size; l++) {
		sum += value[l];
	}
	printf("�� �ڸ����� �� : %d\n", sum);
}