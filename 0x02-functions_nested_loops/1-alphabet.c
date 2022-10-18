#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet
 * Return:in lowercase, followed by a new line
 */
void print_alphabet(void)
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
}
