#include "main.h"

/**
* factorial - a program that returns the factorial of a number
* @n: number to return the factorial from
* made by achebe emmanuel
* Return: factorial of n
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

