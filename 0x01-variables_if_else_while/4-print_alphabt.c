#include <stdio.h>
/**
 * main - Prints the letters of the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; ++letter)
{
	if (letter == 'e' || letter == 'q')
		continue;
	putchar(letter);
}
putchar('\n');
return (0);
}
