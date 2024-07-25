#include <stdio.h>
#include <string.h>

// �κ� ���ڿ� ī��Ʈ
int count(const char* str, char* substr) {
    int count = 0;
    const char* tmp = str;
    size_t substrlen = strlen(substr);

    while ((tmp = strstr(tmp, substr)) != NULL) {
        count++;
        tmp++;  // �ߺ� ī��Ʈ
    }

    return count;
}

int main() {
    char str[1001];
    char substr[1001];

    // ���ڿ� �ޱ�
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin);

    //���ڿ�2 �ޱ�
    printf("�κ� ���ڿ��� �Է��ϼ���: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr, "\n")] = '\0'; 

    //�ڿ�2 ���
    int occ = count(str, substr);

    // ��� ���
    printf("�κ� ���ڿ� \"%s\"��(��) \"%s\"�� %d�� �����մϴ�.\n", substr, str, occ);

    return 0;
}
