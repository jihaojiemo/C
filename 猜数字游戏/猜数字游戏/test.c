#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Game() {
	// ����һ�������
    //32367
	srand((unsigned int)time(0));
	int result = rand() % 100 + 1;
	while (1) {
	printf("��������Ҫ�µ����֣�\n");
	int num;
	scanf("%d", &num);
	    if (num > result) {
			printf("���ˣ�\n");
		}
		else if (num < result) {
			printf("���ˣ�\n");
		}
		else if (num == result) {
			printf("��ϲ�������ˣ�\n");
			break;
		}
	}
}

int main() {
	printf("������1����0�� 1�� ��ʼ��Ϸ  2�� ������Ϸ \n");
	int i = 0;
	scanf("%d", &i);
	if (i == 1) {
		Game();
	}
	else {
		printf("goodbye!");
	}
}
