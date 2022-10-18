#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * _isalpha - checks  is a letter, lowercase or uppercase
 * Return:1  if true , 0 otherwise
 * @c: The character to check
 */
int _isalpha(int c)
{
int ch = c;
int result;
if (isalpha(ch))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
