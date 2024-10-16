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
    printf("¬ведите символ или цифру: ");
    scanf("%c", &c);
    printf("%c - ", c);
    if (isalpha(c)) printf("это буква.\n");
    else if (isdigit(c)) printf("это цифра.\n");
    else printf("неизвестный символ.\n");
    return 0;
}
int lb7t2() {
    float x, y;
    char c;
    puts("\n\n¬ведите выражение");
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
        puts("ќшибка");
    }
    return 0;
}
int lb7t3() {
    int cash;
    int t; char n;
    puts("\n\n¬ведите число [1; 99]");
    scanf("%d", &cash);
    t = cash % 10;
    switch (t) {
    case 0: printf("%d копеек", cash); break;
    case 1: printf("%d копейка", cash); break;
    case 2: printf("%d копейки", cash); break;
    case 3: printf("%d копейки", cash); break;
    case 4: printf("%d копейки", cash); break;
    case 5: printf("%d копеек", cash); break;
    case 6: printf("%d копеек", cash); break;
    case 7: printf("%d копеек", cash); break;
    case 8: printf("%d копеек", cash); break;
    case 9: printf("%d копеек", cash); break;
    default: puts("ќшибка");
    }
    return 0;
}

