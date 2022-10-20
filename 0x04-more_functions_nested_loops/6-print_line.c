#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_line - straight line _
 * @n: the number of times the character _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
if (n <= 0)
{
;
}
else
{
int i = 0;
while (i < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}
