#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	// ����һ���ַ����������洢����
	char password[1024] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("�������������룡\n");
		scanf_s("%s", password);
		if (strcmp(password, "jhj52000") == 0) {
			printf("��¼�ɹ���\n");
			break;
		}
	}
	if (i == 3) {
		printf("��¼ʧ�ܣ�\n");
	}
	system("pause");
	return 0;
}