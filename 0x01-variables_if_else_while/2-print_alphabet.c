#include <stdio.h>

/**
*main - a program to print the alphabet in lowercase using putchar
*
*
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}

