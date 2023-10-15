#include "main.h"

/**
 * print_char - prints a character
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	if (!c)
		return (-1);
	return (print_string(&c));
}


/**
 * print_string - prints a string
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		return (-1);
	return (print_string(str));
}


/**
 * print_percent - prints a percent symbol
 * Return: number of characters printed
 */
int print_percent(void)
{
	return (_putchar('%'));
}


/**
 * print_int - prints an integer
 * @args: argument pointer
 * Return: number of digits printed
 */
int print_int(va_list args)
{
	int value = va_arg(args, int);

	return (print_number(value));
}


/**
 * print_unsigned - prints an unsigned integer
 * @args: argument pointer
 * Return: number of digits printed
 */
int print_unsigned(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	return (print_number(value));
}
