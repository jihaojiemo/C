// ����Ļ�ϴ�ӡ�������
//      1
//    1   1
//  1   2   1
//1   3   3   1
// ��i����i��Ԫ�أ�ÿһ�еĵ�һ���������һ����(��i����)����1
#include <stdio.h>
#include <stdlib.h>
#define N 9
int main() {
	int a[N][N] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < N; ++i) {
		a[i][0] = 1;
		a[i][i] = 1;
    }
	for (i = 2; i < N; ++i) {
		for (j = 1; j < i; ++j) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < N; ++i) {
		for (j = 0; j < N - i; ++j) {
			printf("  ");
		}
		for (j = 0; j <= i; ++j) {
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}
    system("pause");
    return 0;
}