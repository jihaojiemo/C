// ��ȡһ�������������������е�ż��λ������λ���ֱ��������������
// ���磺1011 0011  ż�����У�1101���������У�0101
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Print_bits(int n) {
	// ��ӡż������(i:�Ƽ�λ)
	printf("ż�������ǣ� ");
	for (int i = 31; i >= 1; i -= 2) {
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	// ��ӡ��������
	printf("���������ǣ� ");
	for (int i = 30; i >= 0; i -= 2) {
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}

int main() {
	int n = 0;
	scanf("%d", &n);
	Print_bits(n);
    system("pause");
    return 0;
}