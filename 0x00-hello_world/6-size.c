#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * using main, program prints "Programming is like building a multilingual puzzle"
 * Return 0 when exited properly
 */

int main(void)
{	
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %1d byte(s)\n", sizeof(char));
	printf("Size of a int: %1d byte(s)\n", sizeof(int));
	printf("Size of a long int: %1d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1d byte(s)\n", sizeof(float));
	return (0);
}
