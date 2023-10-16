#include "main.h"
#include <stdio.h>
#include <limits.h>
#include "main.h"

int main(void)
{
    char *s = "Hello, World!";
    char c = 'A';
    int num = 12345;
    int neg_num = -6789;
    unsigned int u_num = 4294967295;
    int max_int = INT_MAX;
    int min_int = INT_MIN;
	char *null_str = NULL;


    _printf("Character: %c\n", c);

    _printf("String: %s\n", s);

    _printf("Number: %d\n", num);
    _printf("Negative Number: %i\n", neg_num);

    _printf("Unsigned Number: %u\n", u_num);


    _printf("Hexadecimal Number: %x\n", num);
    _printf("Hexadecimal Number: %X\n", num);

    _printf("Binary Number: %b\n", num);

    _printf("Reverse String: %r\n", s);

    _printf("Rot13 String: %R\n", s); 

    _printf("Percent Sign: %%\n");

    _printf("Null String: %s\n", null_str);

    _printf("Maximum Integer Value: %d\n", max_int);

    _printf("Minimum Integer Value: %d\n", min_int);

    _printf("Printing a percent sign with a valid specifier but no argument: %s %d %%\n");

    return (0);
}