#include <stdlib.h>
#include <time.h>
/**
 *main -> assign a number to a variable
 *betty style doc for function main goes there 
 *Return : alwayys 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf( "%d\n" is positive\n" , n);
	if (n == 0)
	printf("%d is zero\n" , n);
	if (n < 0)
{
        printf("%d is negative\n" , n);
}
	return (0);
}
