#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Mul(int num) {
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d = %d\t", j, i, i*j);
		}
		printf("\n");
	}
}

int main() {
	int num = 1;
	printf("���û�����1-12�е�����һ�����֣�\n");
	scanf("%d", &num);
	if (num <= 12) {
		Mul(num);
	}
	else {
		printf("������������д�\n");
	}
	system("pause");
	return 0;
}