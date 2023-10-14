#include "main.h"

/**
 * _printf - prints anything
 * @format: list of arguments passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
    int j, checker, char_count = 0, i = 0;
	form_spec specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{NULL, NULL}
	};
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (specifiers[j])
			{
				if (format[i + 1] == specifiers[j].c)
				{
					checker = specifiers[j].f(args);
					if (checker == -1)
						return (-1);
					char_count += checker;
					i++;
					break;
				}
				j++;
			}
			if (format[i + 1] != '\0')
			{
				char_count += _putchar(format[i]);
				i++;
				continue;
			}
			else
				return (-1);
		}
		char_count += _putchar(format[i]);
		i++;
	}
}