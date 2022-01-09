#include<stdio.h>
#include<stdlib.h>

/**
 * Integer constant specifiers
 * Only const and volatile are actually type qualifiers.
 * We call short, long, signed and unsigned "qualifiers" because they behave like one - they alter 
 * the xtics of plain types
 * They are actually type specifiers
 * The basic types int, double, char, etc are also type specifiers
 */

int main (void)
{
	int x = 1234, y = 02322, z = 0x4D2;
	printf("%d\t%o\t%x\n", x, y, z);
	printf("%d\t%d\t%d\n", x, y, z);
}
