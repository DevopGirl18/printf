#include "main.h"

/**
 * print_number - prints an integer
 * @value: integer to be printed
 * Return: number of digits printed
 */
int print_number(unsigned int value)
{
	int power = 1, len = 0;

	while ((value / power) > 9)
		power *= 10;

	while (power > 0)
	{
		len += _putchar('0' + value / power);
		value %= power;
		power /= 10;
	}

	return (len);
}


/**
 * print_string - prints a string
 * @str: string to be printed
 * Return: number of characters printed
 */
int print_string(char *str)
{
	int len = 0;

	while (*str)
	{
		len += _putchar(*str);
		str++;
	}
	return (len);
}


/**
 * print_binary - prints a value in binary format, recursively
 * @value: value to print
 * Return: number of digits printed
 */
int print_binary(unsigned int value)
{
	int count = 0;

	if (value == 0)
	{
		return (0);
	}
	else
	{
		count += print_binary(value / 2);
		count += _putchar((value % 2) + '0');
	}

	return (count);
}


/**
 * print_HEX - prints a value in hexadecimal format
 * in upper case - always 2 characters
 * @value: value to print
 * @flag: flag to indicate if '0' prefix should be printed, 0 = no, 1 = yes
 * @caps: flag to indicate if upper case should be used, 0 = no, 1 = yes
 * Return: number of digits printed
 */
int print_HEX(unsigned long int value, int flag, int caps)
{
	int count = 0;

	if (value < 16)
	{
		if (!flag)
			count += _putchar('0');
		if (value < 10)
			count += _putchar(value + '0');
		else
			count += caps ?
				_putchar((value - 10) + 'A') : _putchar((value - 10) + 'a');
	}
	else
	{
		flag = 1;
		count += print_HEX((value / 16), flag, caps);
		count += print_HEX((value % 16), flag, caps);
	}

	return (count);
}
