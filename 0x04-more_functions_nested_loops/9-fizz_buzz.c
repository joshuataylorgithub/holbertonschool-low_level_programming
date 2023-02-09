#include <stdio.h>
/**
 * main - Main function: prints the numbers
 * from 1 to 100 after \n. For multiples of
 * three: print Fizz, for multiples of five:
 * print Buzz; for numbers which are multiples
 * of both three and five: print FizzBuzz.
 * Return: a number
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{

		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
			else if (num % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (num % 5 == 0)
			{
				printf("Buzz ");
			}

		else
		{
			printf("%d ", num);
		}

		}
		printf("\n");
		return (0);

}
