#include "main.h"

/**
* _strlen - this is a program that returns the length of a string
* made by achebe emmanuel
* @s: string
* Return: length
*/

int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
