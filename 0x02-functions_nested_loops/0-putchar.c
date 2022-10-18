#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*pointer ch stores the starting address of the string _putchar*/
char *ch = "_putchar";
/*accessing the string through the pointer with while loop*/
/* *ch permits to get the value of the first character*/
/* *(ch+1) permits to get the next value so we have to increment the pointer*/
while (*ch)
{
/*print the current character*/
_putchar(*ch);
/*increment the pointer to access the next character*/
ch++;
}
_putchar('\n');
return (0);
}
