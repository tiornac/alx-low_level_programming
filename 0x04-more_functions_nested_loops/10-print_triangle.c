#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the number of times the character should be printed
 * Return: nothing
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i = 0, s = size, k, cpt, j;
while (i < size)
{
j = 0;
--s;
while (j < s)
{
_putchar(' ');
j++;
}
k = 0;
cpt = size - s;
while (k < cpt)
{
_putchar('#');
k++;
}
_putchar('\n');
i++;
}
}
}
