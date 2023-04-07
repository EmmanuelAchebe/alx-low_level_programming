#include <stdio.h>
#include "main.h"

/**
* main - a function that prints the number of arguments passed to the program
* @argc: number of arguments
* @argv: array of arguments
* mad by achebe emmanuel
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
