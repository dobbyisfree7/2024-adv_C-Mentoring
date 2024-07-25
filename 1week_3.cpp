#include <stdio.h>
#include <string.h>

// 부분 문자열 카운트
int count(const char* str, char* substr) {
    int count = 0;
    const char* tmp = str;
    size_t substrlen = strlen(substr);

    while ((tmp = strstr(tmp, substr)) != NULL) {
        count++;
        tmp++;  // 중복 카운트
    }

    return count;
}

int main() {
    char str[1001];
    char substr[1001];

    // 문자열 받기
    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);

    //문자열2 받기
    printf("부분 문자열을 입력하세요: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0'; 

    //자열2 계산
    int occ = count(str, substr);

    // 결과 출력
    printf("부분 문자열 \"%s\"은(는) \"%s\"에 %d번 등장합니다.\n", substr, str, occ);

    return 0;
}
