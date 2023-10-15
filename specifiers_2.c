#include "main.h"

/**
 * print_bin - prints an unsigned integer in binary format
 * @args: argument pointer
 * Return: number of digits printed
 */
int print_bin(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	if (value == 0)
	{
		return (_putchar('0'));
	}
	
	if (value == 1)
	{
		return (_putchar('1'));
	}
	else
	{
		return (print_binary(value));
	}
}


/**
 * print_rev - prints a string in reverse
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0, count = 0;

	if (!str)
		return (-1);

	while (*str)
	{
		str++;
		len++;
	}

	while (len > 0)
	{
		str--;
		count += _putchar(*str);
		len--;
	}

	return (count);
}