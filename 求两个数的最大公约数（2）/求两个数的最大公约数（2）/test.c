#include <stdio.h>
#include <stdlib.h>
int MaxGongyue(int x, int y) {
	// �����˵�ǰ�����Լ��
	int max_gongyue = 0;
	// ��������̽�ı���
	int num = 1;
	for (; num <= x; num++) {
		for (; num <= y; num++) {
			if (x%num == 0 && y%num == 0) {
				max_gongyue = num;
			}
		}
	}
	return max_gongyue;
}
int main() {
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", MaxGongyue(a, b));
	system("pause");
	return 0;
}