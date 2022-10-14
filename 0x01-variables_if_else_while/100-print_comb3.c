#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number1;
int number2;

for (number1 = 0;  number1 <= 9; number1++)
{
for (number2 = 0;  number2 <= 9; number2++)
{
if (number1 < number2)
{
putchar(number1 + '0');
putchar(number2 + '0');
if (number1 == 8 && number2 == 9)
{
;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
