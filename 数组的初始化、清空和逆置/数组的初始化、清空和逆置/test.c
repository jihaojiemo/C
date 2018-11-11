#include <stdio.h>
#include <stdlib.h>

void Init(int arr[], int size) {
	// memset һ���ֽ�һ���ֽڵ����
	memset(arr, 0, size*sizeof(arr[0]));
}

void Empty(int arr[], int size) {
	Init(arr, size);
}
// �������ʼ���������һ���Ĳ���

void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Reverse(int arr[], int size) {
	if (size <= 1) {
		return 0;
	}
	int left = 0;
	int right = size - 1;
	while (left < right) {
		Swap(&arr[left], &arr[right]);
		++left;
		--right;
	}

}
// 5��Ԫ��
#define SIZE 5
// �ں����ڲ��޷��������Ԫ�صĸ���
// ������Ϊ����������ʱ�����ʽת��Ϊָ�룬ָ���������Ԫ��
int main() {
	int arr[SIZE] = { 1, 2, 3, 4, 5 };
	// ��ʼ��
	Init(arr, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\n", arr[i]);
	}
	// ���
	Empty(arr, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\n", arr[i]);
	}
	// ת��
	Reverse(arr, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}