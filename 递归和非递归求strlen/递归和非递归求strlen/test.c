#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �ǵݹ�
int Strlen(char* str) {
	int count = 0;
	while (*str) {
		++count;
		++str;
	}
	return count;
}

// �ݹ�
int Strlen_r(char* str) {
	if (*str) {
		// 1 + �Ӵ��ĳ���
		return 1 + Strlen(1 + str);
	}
	// �մ�
	else {
		return 0;
	}
}

int main() {
	char str[] = { 0 };
	scanf("%s", &str);
	printf("%d\n", Strlen(str));
	printf("%d\n", Strlen_r(str));
    system("pause");
    return 0;
}