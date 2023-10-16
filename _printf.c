#include "main.h"

/**
 * _printf - prints anything
 * @format: list of arguments passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	form_spec specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	char_count = printer(format, specifiers, args);
	va_end(args);

	return (char_count);
}
