// ���� 1/1 - 1/2 + 1/3 - 1/4 + 1/5 ���� + 1/99 - 1/100 ��ֵ
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 1) {
			sum += 1.0 / i; // ���� sum += (double)1/i;
		}                   // ��ʽ����ת��
		else {              // 1.0 double    1.0f float
			sum -= 1.0 / i;
		}
	}
	printf("sum = %lf", sum);
	system("pause");
	return 0;
} 