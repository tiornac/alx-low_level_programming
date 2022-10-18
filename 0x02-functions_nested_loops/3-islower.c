#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _islower - checks for lowercase character.
 * Return:1  if c is lowercase, 0 otherwise
 * @c: The character to check
 */
int _islower(int c)
{
int ch = c;
int result;
if (islower(ch))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
