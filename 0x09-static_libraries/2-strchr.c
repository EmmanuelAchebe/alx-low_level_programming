#include "main.h"
#include <stddef.h>

/**
* _strchr - a fucntion that creates Entry point
* @s: input
* @c: input
* made by achebe emmanuel
* Return: Always 0 (Success)
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
