#include "main.h"

/**
 * print_binary - prints an unsigned integer in binary format
 * @args: argument pointer
 * Return: number of digits printed
 */
int print_binary(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	int count = 0;

	if (value < 0)
		return (-1);
	if (value == 0)
	{
		return (_putchar('0'));
	}

	while (value > 0)
	{
		count += _putchar((value % 2) + '0');
		value /= 2;
	}

	return (count);
}
