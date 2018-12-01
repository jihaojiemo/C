#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// ��������������Ϊ���� % 2 �� -1
//int BitOneCount(int num) {
//	int count = 0;
//	while (num) {
//		if (num % 2 == 1) {
//			++count;
//		}
//		num /= 2;
//	}
//	return count;
//}
// ȷ��ÿһλ�����й��Ƚϣ��� i λ�Ƿ�Ϊ 1
int BitOneCount_1(int num) {
	int count = 0;
	for (int i = 0; i < 32; ++i) {
		// ��һλ����0λ
		if ((num >> i) & 1 ) {
			++count;
		}
	}
	return count;
}
int BitOneCount_2(int num) {
	int count = 0;
	while (num) {
		++count;
		// �ӵ�λ����λ���ѵ�һ�γ��� 1 ��λ�ñ�� 0
		num = num & (num - 1);
	}
	return count;
}
int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", BitOneCount_1(num));
	printf("%d\n", BitOneCount_2(num));
	system("pause");
	return 0;
}
