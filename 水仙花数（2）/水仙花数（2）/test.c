#include <stdio.h>
#include <stdlib.h>
int IsShuixian(int num) {
	// ��ֹnum���޸ģ�����Ҫ��num���бȽ�
	int temp = num;
	// ��λ 
	int x1 = num % 10;
	// ʮλ
	num /= 10;
	int x2 = num % 10;
	// ��λ
	num /= 10;
	int x3 = num % 10;
	if (x1*x1*x1 + x2*x2*x2 + x3*x3*x3 == temp) {
		return 1;
	}
	return 0;
}
int main() {
	for (int i = 100; i <= 999; ++i) {
		// �ж�IsShuixian�Ƿ����
		if (IsShuixian(i)) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}