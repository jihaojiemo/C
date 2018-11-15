#include <stdio.h>
#include <stdlib.h>
// ���򣺴�С����  ���򣺴Ӵ�С
// ����󣺴�ǰ����ð  ����С���Ӻ���ǰð
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void BubbleSort(int* arr, int size) {
	// [0,bound)����������  [bound,size)δ��������
	int bound = 0;
	for (; bound < size; ++bound) {
		// ����Сֵ
		int cur = size - 1;
		for (; cur > bound; --cur) {
			if (arr[cur - 1] > arr[cur]) {
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main() {
	// ������Ϊ�����Ĳ���ʱ����ʽת����ָ�룬ָ���������Ԫ��
	// �ں����ⲿ�����鳤�����Ȼ��������������������
	int arr[] = { 3, 8, 5, 9, 2, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}