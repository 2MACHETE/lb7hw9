#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    int katet;
    char s;
    printf("������� ����� ������: ");
    scanf("%d", &katet);
    printf("������� ������ ��� ���������: ");
    scanf(" %c", &s);
    for (int i = 0; i < katet; i++) {
        for (int j = 0; j < katet; j++) {
            if (i == katet - 1 || j == 0 || j == i) {
                printf("%c", s);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}