#include <stdio.h>
#include <stdlib.h>
void PrintLine(int blank_count, int star_count) {
	for (int i = 0; i < blank_count; ++i) {
		printf(" ");
	}
	for (int i = 0; i < star_count; ++i) {
		printf("*");
	}
	printf("\n");
}
void PrintLingxing(int height) {
	// �öԽ��ߵ�һ��������εĴ�С
	// �ȴ�ӡ�ϰ벿��
	for (int i = 1; i <= height; ++i) {
		PrintLine(height + 1 - i, 2 * i - 1);
	}
	// �ٴ�ӡ�м䲿��
	PrintLine(0, 2 * (height + 1) - 1);
	// ��ӡ�°벿��
	for (int i = height; i >= 1; --i) {
		PrintLine((height + 1) - i, 2 * i - 1);
	}
}
int main() {
	// 1��  6�ո�1�Ǻ�
	// 2��  5�ո�3�Ǻ�
	// 3��  4�ո�5�Ǻ�
	// i��  7-i �ո�2*i-1 �Ǻ�
	int height = 0;
	scanf_s("%d", &height);
	PrintLingxing(height);
	system("pause");
	return 0;
}