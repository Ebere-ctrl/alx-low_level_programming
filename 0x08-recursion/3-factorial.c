#include "main.h"
/**
 *factorial - returns factorial of a natural number
 *@n: variable to be calculated
 *Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
