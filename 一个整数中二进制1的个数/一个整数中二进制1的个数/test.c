#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
// ��������������Ϊ���� % 2 �� -1
=======
// 仅限于正数，因为负数 % 2 是 -1
>>>>>>> 7b715b6ff11ae63a249316712fff204c4b5d8884
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
=======
// 确保每一位都进行过比较，第 i 位是否为 1
>>>>>>> 7b715b6ff11ae63a249316712fff204c4b5d8884
int BitOneCount(int num) {
	int count = 0;
	for (int i = 1; i <= 32; ++i) {
		if (num & (1 << i)) {
			++count;
		}
	}
	return count;
}
int main() {
	int num = 0;
	scanf("%d", &num);
	printf("%d\n", BitOneCount(num));
    system("pause");
    return 0;
}
