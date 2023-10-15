#include "main.h"

/**
 * print_number - prints an integer
 * @value: integer to be printed
 * Return: number of digits printed
 */
int print_number(int value)
{
	int power = 1, len = 0;
	unsigned int num;

	if (value < 0)
	{
		len += _putchar('-');
		num = value * -1;
	}
	else
		num = value;

	while ((num / power) > 9)
		power *= 10;

	while (power > 0)
	{
		len += _putchar('0' + num / power);
		num %= power;
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
