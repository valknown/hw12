#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_CTYPE, "RUS");
    int a[2];
    long size = (char *)&a[1] - (char *)&a[0];
    printf("Размер int: %ld байт\n", size);
    return 0;
}