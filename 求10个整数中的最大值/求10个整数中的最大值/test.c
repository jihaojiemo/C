#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[] = { 2, 5, 3, 8, 7, 0, 4, 1, 6 };
	int max = arr[0];// �ѵ�һ������Ϊ���ֵ
	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d\n", max);
	system("pause");
	return 0;
}