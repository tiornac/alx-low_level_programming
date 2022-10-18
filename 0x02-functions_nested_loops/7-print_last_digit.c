#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number to check
 * Return: an integer
 */
int print_last_digit(int n)
{
int ldg = n % 10;
_putchar(abs(ldg) + '0');
return (abs(ldg));
}
