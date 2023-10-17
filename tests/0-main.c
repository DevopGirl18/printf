#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main() {
    int num = 42;
    int* ptr = &num;

    _printf("Address of num: %p\n", (void*)ptr);

    return 0;
}