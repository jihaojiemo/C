#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	// ��֤a��b֮�䣬a�ǱȽϴ������
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	// ��֤a��c֮�䣬a�ǱȽϴ������
	// ��ô��ʱa��������������������
	if (a < c) {
		int temp = a;
		a = c;
		c = temp;
	}
	printf("%d\n", a);
	if (b > c) {
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else {
		printf("%d\n", c);
		printf("%d\n", b);
	}
	system("pause");
	return 0;
}