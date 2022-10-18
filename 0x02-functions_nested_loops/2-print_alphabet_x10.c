#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return:in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char *ch;
ch = (char *)malloc(sizeof(char));

*ch = 'a';
while (*ch <= 'z')
{
_putchar(*ch);
*ch = *ch + 1;
}
_putchar('\n');
i++;
}
}
