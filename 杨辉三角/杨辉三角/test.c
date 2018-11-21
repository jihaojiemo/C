#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void YanghuiTriangle(int n) {
	int arr[25][25] = { 0 };
	int row = 1; int col = 1;
	if (n >= 2) {
		for (row = 1; row <= n; ++row) {
			// �� n �о��� n ����
			arr[row][1] = 1;
			arr[row][row] = 1;
		}
	}
	// �ӵ����еڶ��п�ʼ��ӡ����
	for (row = 3; row <= n; ++row) {
		for (col = 1; col <= row; ++col) {
			if (col == 1 || col == n) {
				arr[row][col] = 1;
			}
			arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
		}
	}
	for (row = 1; row <= n; ++row) {
		for (col = 1; col <= n - row; col++) {
			// �����ո�
			printf("   ");
		}
		for (col = 1; col <= row; ++col) {
			printf("%6d", arr[row][col]);
		}
		printf("\n");
	}
}
int main() {
	int n = 0;
	printf("��������Ҫ��ӡ��������\n");
	scanf("%d", &n);
	YanghuiTriangle(n);
    system("pause");
    return 0;
}