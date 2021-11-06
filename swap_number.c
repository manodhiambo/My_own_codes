#include<stdio.h>
#include<stdlib.h>

/**
 * A program to swap two numbers
 * @a - First number
 * @b - Second number
 * @temp - Temporary location for the swap
 * Return: 0
 */

int main()
{
	int a, b, temp;
	printf("Enter the Numbers: ");
	scanf("%d%d", &a, &b);
	printf("\nBefore swapping..\na=%d,b=%d");
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping..\na=%d,b=%d", a, b);
	return 0;
}
