#include <stdlib.h>
int NineCount(int x) {
	int count = 0;
	// ��λ��
	// �жϸ�λ
	if (x % 10 == 9) {
		++count;
	}
	// �ж�ʮλ
	if (x / 10 == 9) {
		++count;
	}
	return count;
}
int main() {
	int count = 0;
	for (int i = 1; i < 100; i++) {
		count += NineCount(i);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}