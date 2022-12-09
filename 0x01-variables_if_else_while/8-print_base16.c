#include <stdio.h>
#include <stdlib.h>
/**
 * main -  all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
