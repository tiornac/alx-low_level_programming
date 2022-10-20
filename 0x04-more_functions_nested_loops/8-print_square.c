#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_square - prints a square
 * @size: the number of times the character should be printed
 * Return: nothing
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i = 0;
while (i < size)
{
int j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
}
}
