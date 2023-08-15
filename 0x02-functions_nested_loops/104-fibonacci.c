#include <stdio.h>

/**
 * main - Generates Fibonacci numbers up to a certain point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	/* Add a blank line after declarations */
	printf("\n");

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = bef / l;
	bef2 = bef % l;
	aft1 = aft / l;
	aft2 = aft % l;

	/* Print leading zeros for numbers less than 1 billion */
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%09lu", aft2 % l);
		unsigned long int temp = aft1;
		aft1 = aft1 + bef1;
		bef1 = temp;
		temp = aft2;
		aft2 = aft2 + bef2;
		bef2 = temp;
	}
	printf("\n");
	return (0);
}
