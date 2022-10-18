#include <stdio.h>
#include "main.h"

/**
 * firs_digit - return the first digit
 * Return: return the first digit
 * @n: the number n
 */
int firs_digit(int n)
{
while (n >= 10)
{
n = n / 10;
}
return (n);
}

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 9 times table
 */
void times_table(void)
{
int i = 0, j, res, fdres, ldres;

while (i < 10)
{
j = 0;
while (j < 10)
{
res = i * j;
if (res < 10 || res == 0)
{
_putchar('0' + res);
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
else
{
fdres = firs_digit(res);
ldres = res % 10;
_putchar('0' + fdres);
_putchar('0' + ldres);
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
j++;
}
_putchar('\n');
i++;
}
}
