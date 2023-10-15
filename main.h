#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format_spec - defines a structure for symbols and functions
 *
 * @c: The associated character
 * @f: The associated function
 */
typedef struct format_spec
{
	char *c;
	int (*f)(va_list);
} form_spec;

/* _putchar.c */
int _putchar(char);

/* _printf */
int _printf(const char *, ...);
int printer(const char *, form_spec *, va_list);

/*specifiers 1 & 2*/
int print_char(va_list);
int print_str(va_list);
int print_percent();
int print_int(va_list);
int print_bin(va_list);
int print_unsigned(va_list);
int print_rev(va_list);

/*helpers*/
int print_number(int);
int print_string(char *);
int print_binary(unsigned int);

#endif /* MAIN_H */
