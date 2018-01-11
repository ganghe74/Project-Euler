#include <stdio.h> // ������Ʈ ���Ϸ� 19��

// 1900�� 1�� 1���� ������
// 4��, 6��, 9��, 11���� 30�ϱ��� �ְ�, 1��, 3��, 5��, 7��, 8��, 10��, 12���� 31�ϱ��� �ִ�.
// 2���� 28��������, ���⿡�� 29�ϱ��� �ִ�.
// ������ ������ 4�� ������ �������� �ظ� ���Ѵ�.
// ������ 400���� ������ �������� �ʴ� �� 100��°�� ������ �ƴϸ�,
// 400���� ������ �������� �����̴�

// 20���� (1901�� 1�� 1�� ~ 2000�� 12�� 31��) ����, �ſ� 1���� �Ͽ����� ���� �� �� ���Դϱ�?

int yoon(int input) { // ������ (return 0 : ���� X // 1 : ���� O)
	if (input % 4 == 0) { // 4�� �����������
		if (input % 100 == 0) { // 100���� �����������
			if (input % 400 == 0) { // 400���� �����������
				return 1; // �����Դϴ�
			}
			return 0; // ������ �ƴմϴ�
		}
		return 1; // �����Դϴ�
	}
	return 0; // ������ �ƴմϴ�
}

int main(int argc, char* argv[]) {
	int year = 1900;
	int month = 1;
	int day = 1;
	int yo = 1; // ������ 0 : �� 1 : ��, 2 : ȭ, 3 : ��, 4 : ��, 5 : ��, 6 : ��
	int count = 0;

	while (year < 2001) { //
		if (day > 27) { // ��¥�� 28�� �̻��̸� �� ��� ����
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) { // 1,3,5,7,8,10,12 AND 32�� -> 1�� , �� +
				if (day == 32) {
					day = 1;
					month += 1;
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) { // 4,6,9,11 AND 31�� -> 1�� , �� +
				if (day == 31) {
					day = 1;
					month += 1;
				}
			}
			else if (month == 2) { // 2���̰�
				if (yoon(year) == 0 && day == 29) { // ���� X AND 29�� -> 1�� , �� +
					day = 1;
					month += 1;
				}
				if (yoon(year) == 1 && day == 30) { // ���� O AND 30�� -> 1�� , �� +
					day = 1;
					month += 1;
				}
			}
		}

		if (month == 13) {
			month = 1;
			year += 1;
		}

		if (day == 1 && year > 1900 && year < 2001) { // 1�� (AND 1901.1.1 ~ 2000.12.31) �̸� COUNT ��� ����
			if (yo % 7 == 0) {
				printf("%d�� %d�� 1���� �Ͽ���  COUNT !! \n", year, month);
				count++;
			}
			if (yo % 7 == 1) printf("%d�� %d�� 1���� ������\n", year, month);
			if (yo % 7 == 2) printf("%d�� %d�� 1���� ȭ����\n", year, month);
			if (yo % 7 == 3) printf("%d�� %d�� 1���� ������\n", year, month);
			if (yo % 7 == 4) printf("%d�� %d�� 1���� �����\n", year, month);
			if (yo % 7 == 5) printf("%d�� %d�� 1���� �ݿ���\n", year, month);
			if (yo % 7 == 6) printf("%d�� %d�� 1���� �����\n", year, month);
		}

		// printf("����� %d�� %d�� %d��\n", year, month, day);

		day++;
		yo++;
	}

	printf("\n1�� 1���� �Ͽ����� ���� �� %d ��\n", count);

	return 0;
}