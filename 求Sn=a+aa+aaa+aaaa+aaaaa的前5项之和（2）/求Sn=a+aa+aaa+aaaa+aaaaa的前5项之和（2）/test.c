#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// �Ȱ�ÿһ�������I,�����
// ��1�� 2
// ��2�� 22 = 20 + 2 = 2*10 + 2 = 2*10^1 + 2*10^0
// ��3�� 222 = 200 + 20 + 2 = 2*100 + 2*10 +2 = 2*10^2 + 2*10^1 + 2*19^0
// ��4�� 2222 = 2*10^3 + 2*10^2 +2*10^1 + 2*10^0

// ��������n�������
int CreatNum(int a, int n) {
	if (a > 9 || a <= 0 || n<= 0) {
		return 0;
	}
	int num = 0;
	// i��10��ָ��
	for (int i = 0; i < n; ++i) {
		// pow ����ֵ�� double,  double*int = double, double+int = int,��ʧ����
		num += a*(int)pow(10, i);
	}
	return num;
}
int main() {
	printf("%d\n", CreatNum(2, 5));
	int a = 1;
	int sum = 0;
	for (int i = 1; i <= 5; ++i) {
		sum += CreatNum(a, i);
	}
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}