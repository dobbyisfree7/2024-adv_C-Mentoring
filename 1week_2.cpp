#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int N;
    printf("2부터 n까지의 소수 찾기,, n을 입력하세요 (최대 1000): ");
    scanf_s("%d", &N);

    if (N < 2 || N > 1000) {
        printf("2부터 1000 사이의 값을 입력하세요.\n");
        return 1;
    }

    int* a = (int*)malloc((N + 1) * sizeof(int));  // 배열 동적 할당
    if (a == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // 배열 초기화
    for (int i = 0; i <= N; i++) {
        a[i] = 0;
    }

    // 에라토스테네스의 체 알고리즘
    for (int i = 2; i <= sqrt(N); i++) {
        if (a[i] == 0) {  // i가 소수이면
            for (int j = 2; i * j <= N; j++) {  // 자신을 제외한 i의 배수 제거
                a[i * j] = 1;
            }
        }
    }

    printf("소수:\n");
    for (int i = 2; i <= N; i++) {
        if (a[i] == 0) printf("%d\n", i);
    }

    free(a);


}
