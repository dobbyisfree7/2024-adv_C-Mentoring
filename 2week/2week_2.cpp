#include <stdio.h>
#include <malloc.h>
int main() {
	//�迭 ũ�� �Է�
	int n;  
	int N;
	scanf_s("%d", &n);
	int* k = (int*)malloc(sizeof(int) * n);
	if (k == NULL) {
		return 1;
	}
	for (int i = 0; i < n; i++) {//���� ���
		scanf_s("%d", k+i);
	}
	//���� ���� �Է�
	scanf_s("%d", &N);
	//�� ���� �Է�
	for (int p = 0; p < N; p++) {
		int L, R;
		int sum = 0;
		scanf_s("%d %d", &L, &R);
		for (int j = L - 1; j < R; j++) {
			sum = sum + k[j];
		}
		printf("%d", sum);
		printf("\n");
		sum = 0;
	}
	free(k);


}