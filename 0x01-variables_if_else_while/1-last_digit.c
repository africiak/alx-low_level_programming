#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of n
 * and if n is greater than 5, 0 ,or less than 6
 *
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %i is %i and is ", n, x);
	if (x > 5)
		printf("greater than 5\n");
	else if (x == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);/* retirns the last digit of n, and if n is greater than 5, 0 ,or less than 6*/
}
