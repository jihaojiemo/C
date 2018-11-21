#include <stdio.h>
#include <stdlib.h>
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void BubbleSort(int arr[], int size) {
	// ���򣨴�ǰ����ð�������
	// [0, bound) δ��������   [bound, size] ����������
	int bound = size;
	for (; bound > 0; bound--) {
		int cur = 1;
		for (; cur < bound; cur++) {
			if (arr[cur - 1] > arr[cur]) {
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main() {
	int arr[] = { 3, 6, 8, 5, 0, 1, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
    system("pause");
    return 0;
}