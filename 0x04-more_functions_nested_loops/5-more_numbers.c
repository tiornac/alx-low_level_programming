#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * first_digit - return the first digit
 * Return: return the first digit
 * @n: the number n
 */
int first_digit(int n)
{
while (n >= 10)
{
n = n / 10;
}
return (n);
}

/**
 * last_digit - return the last digit
 * Return: return the last digit
 * @n: the number n
 */
int last_digit(int n)
{
return (n % 10);
}

/**
 * more_numbers - prints the numbers, from 0 to 14.
 * 10 times
 * Return: nothing
 */
void more_numbers(void)
{
int i = 0, j, fn, ln;
while (i < 10)
{
j = 0;
while (j < 15)
{
fn = first_digit(j);
ln = last_digit(j);
if (j > 9)
{
_putchar('0' + fn);
}
_putchar('0' + ln);
j++;
}
_putchar('\n');
i++;
}
}
