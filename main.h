#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

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


int _putchar(char c);

#endif /* MAIN_H */