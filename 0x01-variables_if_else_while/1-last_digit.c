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
int n_ldg;

srand(time(0));
n = -98;
/*get the last digit of the number*/
n_ldg = n % 10;
/*do all the conditions and prints results*/
if (n_ldg == 0)
{
printf("Last digit of %i is %i and is 0\n", n, n_ldg);
}
else if (n_ldg < 6 && (n_ldg > 0 || n_ldg < 0))
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n_ldg);
}
else if (n_ldg > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, n_ldg);
}
return (0);
}
