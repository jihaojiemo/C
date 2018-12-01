#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ǵݹ鷨
void Reverse_string(char* str) {
	// �ַ�����Ϊ��
	if (*str) {
		// ����ָ��
		char* start = str;
		// β���ָ��
		char* end = str + strlen(str) - 1;
		// ��������β�������
		while (start < end) {
			char temp = *start;
			*start = *end;
			*end = temp;
			++start;
			--end;
		}
	}	
} 

// �ݹ鷨��Ҫ����ʹ���ַ����⺯��
int Strlen(char* str) {
	int count = 0;
	while (*str) {
		++count;
		++str;
	}
	return count;
}
void Reverse_string_r(char* str) {
	if (*str) {
		char* start = str;
		char* end = str + Strlen(str) - 1;
		// ��β���ݽ���
		char temp = *start;
		*start = *end;
		// β��������ʱ��Ϊ������Ƿ�
		*end = '\0';
		// ��ת�Ӵ�
		Reverse_string_r(str + 1);
		// ��β�����ݻָ�
		*end = temp;
	}
}
	
int main() {
	char str[100] = { 0 };
	scanf("%s", &str);
	Reverse_string(str);
	printf("%s\n", str);
	Reverse_string_r(str);
	printf("%s\n", str);
    system("pause");
    return 0;
}