#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("����������������\n");
	int i, j, temp;
	scanf("%d,%d\n", &i, &j);
	if (i < j){
		temp = i;
		i = j;
		j = temp;
	}
	while (i % j != 0){
		temp = i%j;
		i = j;
		j = temp;
	}
	printf("���Լ��Ϊ��%d\n", j);
	system("pause");
	return 0;
}