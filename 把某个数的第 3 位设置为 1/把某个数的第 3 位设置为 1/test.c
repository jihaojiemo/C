#include <stdio.h>
#include <stdlib.h>
int main() {
	// 32λ���޷�������
	// �� 3 λ���ó� 1 �൱�ڣ�1 << 3
	unsigned int a = 0;
	printf("%x\n", a | (1 << 3));
    system("pause");
    return 0;
}