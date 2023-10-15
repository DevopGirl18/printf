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
