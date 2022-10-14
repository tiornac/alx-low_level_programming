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
int number;

for (number = 0;  number <= 9; number++)
{
putchar(number + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
