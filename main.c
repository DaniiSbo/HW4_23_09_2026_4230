#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    int c1;

    system("chcp 65001 > nul");

    printf("=== СИСТЕМА КАЛИБРОВКИ СТАНКА ===\n");
    printf("Введите три целых числа (параметры A, B, C): ");
    scanf("%d %d %d", &a, &b, &c);

    c1 = (a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0);

    printf("Калибровка успешна (1 - да, 0 - нет): %d\n", c1);

    return 0;
}
