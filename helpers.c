#include "main.h"

/**
 * printer - prints anything
 * @format: list of arguments passed to the function
 * @specifiers: list of specifiers
 * @args: list of arguments
 * Return: number of characters printed
 */
int printer(const char *format, form_spec specifiers[], va_list args)
{
	int i = 0, j, char_count = 0, checker;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			for (j = 0; specifiers[j].c != NULL; j++)
			{
				if (format[i] == specifiers[j].c[0])
				{
					checker = specifiers[j].f(args);
					if (checker == -1)
						return (-1);
					char_count += checker;
					break;
				}
			}
			if (specifiers[j].c == NULL)
			{
				char_count += print_percent();
				char_count += _putchar(format[i]);
			}
		}
		else
		{
			char_count += _putchar(format[i]);
		}
		i++;
	}

	return (char_count);
}


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
