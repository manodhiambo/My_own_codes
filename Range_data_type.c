#include <stdio.h>
#include <limits.h>
#include <float.h>

/**
 * A program to print the range of values for certain data types
 * The parameters such as INT_MIN can be found in standard headers limits.h and float.h
 * look at range limits of certain types
 * Return: Nothing
 */

int main (void)
{
	printf("Integer range:\t%d\t%d\n", INT_MIN, INT_MAX);
	printf("Long range:\t%d\t%d\n", LONG_MIN, LONG_MAX);
	printf("Float range:\t%e\t%e\n", FLT_MIN, FLT_MAX);
	printf("Double range:\t%e\t%e\n", DBL_MIN, DBL_MAX);
	printf("Long double range:\t%e\t%e\n", LDBL_MIN, LDBL_MAX);
	printf("Float-Double epsilon:\t%e\t%e\n", FLT_EPSILON, DBL_EPSILON);
}

/**
 * Print the size of various types in "number-of-chars"*/

int main (void)
{
	printf("void\tchar\tshort\tint\tlong\tfloat\tdouble\n);
	printf("%3d\t%3d\t%3d\t%3d\t%3d\t%3d\t%3d\n",
			sizeof(void), sizeof(char), sizeof(short), sizeof(int), sizeof(long),
			sizeof(float), sizeof(double));
}
