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
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * Return: values starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int hours = 0;
int minutes = 0;
int fhdg, lhdg, fmdg, lmdg;
while (hours <= 23)
{
while (minutes <= 59)
{
fhdg = firs_digit(hours);
lhdg = hours % 10;
fmdg = firs_digit(minutes);
lmdg = minutes % 10;
if (hours < 10 && fhdg == lhdg)
{
fhdg = 0;
}
if (minutes < 10 && fmdg == lmdg)
{
fmdg = 0;
}
_putchar('0' + fhdg);
_putchar('0' + lhdg);
_putchar(':');
_putchar('0' + fmdg);
_putchar('0' + lmdg);
_putchar('\n');
minutes++;
}
hours++;
minutes = 0;
}
}
