<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints to the standard error
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints to the standard error
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

	return (0);
}
>>>>>>> 503212983816e20dbbdb4bd2f54bb5c1fe1043d0
