#include<stdio.h>
#include<conio.h>

/**
 * program to find the square and cube of a given number
 * @sq - square of a number
 * @cub - cube of a given number
 */

int main()
{
	int n, sq, cub;
	clscr();
	printf("Enter the number: ");
	scanf("%d", &n);
	sq=n*n;
	cub=n*n*n;
	printf("\nsq: %d\ncub: %d", sq, cub);
	getch();
}
