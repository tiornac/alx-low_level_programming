#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _isupper - checks for lowercase character.
 * Return:1  if c is lowercase, 0 otherwise
 * @c: The character to check
 */
int _isupper(int c)
{
int result;
if (isupper(c))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
