#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 *
 * @n: The number to check
 */
int print_sign(int n)
{
int ch = n;
int result;
if (ch < 0)
{
_putchar('-');
result = -1;
}
else if (ch == 0)
{
_putchar('0');
result = 0;
}
else
{
_putchar('+');
result = 1;
}
return (result);
}
