#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 仅限于正数，因为负数 % 2 是 -1
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
<<<<<<< HEAD
// ȷ��ÿһλ�����й��Ƚϣ��� i λ�Ƿ�Ϊ 1
int BitOneCount_1(int num) {
=======

// 和1进行&操作可图得到该位上的二进制值
// 确保每一位都进行过比较，第 i 位是否为 1
int BitOneCount(int num) {
>>>>>>> 9b3114b998d9dd3b3f7496771f2f4addb0503b9c
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
