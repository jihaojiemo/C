#include <stdio.h>
#include <stdlib.h>
unsigned int Reverse_bit(unsigned int value) {
	unsigned int value_1 = 0;
	for (int i = 1; i <= 32; ++i) {
		// (value >> i) & 1 ����ȡ��ĳһλ�Ķ�����ֵ
		// ������ĵ�һλ����31λ���ڶ�λ����30λ�����������ƣ������ƺ�Ľ�����а�λ�����㼴�ɵõ����ս����
		int ret = (value >> i) & 1;
		if (ret) {
			value_1 |= ret << (31 - i);
		}
	}
	return value_1;
}
int main() {
	int value = 0;
	scanf_s("%u", &value);
	printf("%u\n", Reverse_bit(value));
    system("pause");
    return 0;
}