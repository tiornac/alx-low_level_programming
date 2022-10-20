#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * Return:1  if c is a digit, 0 otherwise
 * @c: The character to check
 */
int _isdigit(int c)
{
int result;
if (isdigit(c))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
