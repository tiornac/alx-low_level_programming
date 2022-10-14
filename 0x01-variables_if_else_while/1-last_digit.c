#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int n_last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/*get the last digit of the number*/
n_last_digit = n % 10;
/*do all the conditions and prints results*/
if (n_last_digit == 0)
{
printf("Last digit of %i is %i and is 0\n", n, n_last_digit);
}
else if (n_last_digit < 6 && n_last_digit > 0)
{
printf("Last digit of %i is %i and less than 6 and not 0\n", n, n_last_digit);
}
else if (n_last_digit > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n_last_digit);
}
return (0);
}
