#include <stdlib.h>
#include <time.h>
/* more he */

/* main - Entry point
 * Return- Returns (0) always (success)
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
