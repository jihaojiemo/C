//һ��������ֻ��һ�����ֳ�����һ��,�����������ֶ��ǳɶԳ��ֵ�,���ҳ��������(ʹ��λ����)
// ������򱣳�ԭֵ����
#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[] = { 1, 1, 2, 2, 3, 4, 3, 5, 5, 6, 6 };
	int	ret = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		ret = ret ^ arr[i];
	}
	printf("����һ�ε�������:%d\n", ret);
    system("pause");
    return 0;
}