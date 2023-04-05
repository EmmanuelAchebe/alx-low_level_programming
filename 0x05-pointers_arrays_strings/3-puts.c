#include "main.h"

/**
* _puts - this is a programme that prints a string,
* followed by a new line, to stdout
* made by achebe Emmanuel
* @str: string to print
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
