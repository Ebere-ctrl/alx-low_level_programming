#include <stdio.h>
/**
 * main - Prints numbers between 0 - 9 .
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned int numbers;
for (numbers = 0; numbers < 10; ++numbers)
{
	putchar(numbers);
}
putchar('\n');
return (0);
}
