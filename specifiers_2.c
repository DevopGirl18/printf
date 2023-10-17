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


/**
 * print_rot13 - prints a string in rot13 format
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (!str)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
			(str[i] >= 'A' && str[i] <= 'M'))
		{
			count += _putchar(str[i] + 13);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
			(str[i] >= 'N' && str[i] <= 'Z'))
		{
			count += _putchar(str[i] - 13);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}

	return (count);
}


/**
 * print_STR - prints a string, replacing non-printable characters
 * @args: argument pointer
 * Return: number of characters printed
 */
int print_STR(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (!str)
		return (-1);

	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_HEX(str[i]);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}

	return (count);
}
