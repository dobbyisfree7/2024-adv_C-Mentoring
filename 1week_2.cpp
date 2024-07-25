#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int N;
    printf("2���� n������ �Ҽ� ã��,, n�� �Է��ϼ��� (�ִ� 1000): ");
    scanf_s("%d", &N);

    if (N < 2 || N > 1000) {
        printf("2���� 1000 ������ ���� �Է��ϼ���.\n");
        return 1;
    }

    int* a = (int*)malloc((N + 1) * sizeof(int));  // �迭 ���� �Ҵ�
    if (a == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    // �迭 �ʱ�ȭ
    for (int i = 0; i <= N; i++) {
        a[i] = 0;
    }

    // �����佺�׳׽��� ü �˰���
    for (int i = 2; i <= sqrt(N); i++) {
        if (a[i] == 0) {  // i�� �Ҽ��̸�
            for (int j = 2; i * j <= N; j++) {  // �ڽ��� ������ i�� ��� ����
                a[i * j] = 1;
            }
        }
    }

    printf("�Ҽ�:\n");
    for (int i = 2; i <= N; i++) {
        if (a[i] == 0) printf("%d\n", i);
    }

    free(a);


}
