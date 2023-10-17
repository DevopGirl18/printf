# printf
# Description
In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.
This project seeks to recreate this function, assigned by ALX-SE.

The available convertion specifiers are:

| Specifier | Description |
| --- | --- |
| c | Prints a single character |
| s | Prints a string of characters |
| % | Prints a percent sign |
| d | Prints integers |
| i | Prints integers |
| b | Prints the binary representation of an unsigned decimal |
| r | Prints a reversed string |
| R | Prints the rot13'ed string |
| S | Prints a string and non printable characters|
| p | Prints the address of a pointer |
| u | Prints the unsigned decimal representation of a number |
| o | Prints the octal representation of a decimal number |
| x | Prints the hexadecimal representation of a decimal number |
| X | Prints the hexadecimal representation of a decimal number in uppercase letters |

Usage
All the files are compiled on Ubuntu 14.04 LTS
Compile your code with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf`
Include the "main.h" header file on the functions using the _printf()
Create a file (main.c) with the contents below
Example
```c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Hello, World!\n");
    _printf("This is a %% sign\n");
    _printf("%c and %s and %c\n", 'A', "test", 'B');
    _printf("NULL string: %s", NULL);

    return (0);
}
```

# Authors:
Daniel Sarpong and Chidiogo Igweneme