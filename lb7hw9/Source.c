#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <math.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	lb7t1();
    lb7t2();
    lb7t3();
}
int lb7t1() {
    char c;
    printf("������� ������ ��� �����: ");
    scanf("%c", &c);
    printf("%c - ", c);
    if (isalpha(c)) printf("��� �����.\n");
    else if (isdigit(c)) printf("��� �����.\n");
    else printf("����������� ������.\n");
    return 0;
}
int lb7t2() {
    float x, y;
    char c;
    puts("\n\n������� ���������");
    scanf("%f%c%f", &x, &c, &y);
    switch (c) {
    case '+':
        printf("%.1f%c%.1f=%.1f", x, c, y, x + y);
        break;
    case '-':
        printf("%.1f%c%.1f=%.1f", x, c, y, x - y);
        break;
    case '/':
        printf("%.1f%c%.1f=%.1f", x, c, y, x / y);
        break;
    case '*':
        printf("%.1f%c%.1f=%.1f", x, c, y, x * y);
        break;
    case '^':
        printf("%.1f%c%.1f=%.1f", x, c, y, pow(x, y));
        break;
    default:
        puts("������");
    }
    return 0;
}
int lb7t3() {
    int cash;
    int t; char n;
    puts("\n\n������� ����� [1; 99]");
    scanf("%d", &cash);
    t = cash % 10;
    switch (t) {
    case 0: printf("%d ������", cash); break;
    case 1: printf("%d �������", cash); break;
    case 2: printf("%d �������", cash); break;
    case 3: printf("%d �������", cash); break;
    case 4: printf("%d �������", cash); break;
    case 5: printf("%d ������", cash); break;
    case 6: printf("%d ������", cash); break;
    case 7: printf("%d ������", cash); break;
    case 8: printf("%d ������", cash); break;
    case 9: printf("%d ������", cash); break;
    default: puts("������");
    }
    return 0;
}

