#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// ��������������Ϊ���� % 2 �� -1
int BitOneCount(int num) {
	int count = 0;
	while (num) {
		if (num % 2 == 1) {
			++count;
		}
		num /= 2;
	}
	return count;
}
// ȷ��ÿһλ�����й��Ƚϣ��� i λ�Ƿ�Ϊ 1
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