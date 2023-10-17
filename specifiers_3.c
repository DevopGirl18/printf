#include "main.h"

/**
 * print_oct - prints a number in octal (base 8)
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_oct(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	return (print_octal(value));
}


/**
 * print_hex - prints a number in hexadecimal (base 16) in lower case
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	return (print_hexadecimal(value, 0, 0));
}


/**
 * print_HEX - prints a number in hexadecimal (base 16) in upper case
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_HEX(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	return (print_hexadecimal(value, 0, 1));
}
