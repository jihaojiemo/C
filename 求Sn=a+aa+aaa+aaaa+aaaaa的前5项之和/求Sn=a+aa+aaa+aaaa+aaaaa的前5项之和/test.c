#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	printf("���û�����һ��������\n");
	int i = 0;
	scanf_s("%d", &i);
	int sum = 0;
	for (int j = 1; j <= 5; j++) {
		sum += (int)pow(i, j);
	}
	printf("ǰ����֮��Ϊ��%d\n", sum);
	system("pause");
	return 0;
}