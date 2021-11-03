#include<stdio.h>
#include<stdlib.h>

/**
 * A program to Calculate total and average of marks
 * @Total = m1 + m2 + m3 -where m is the max of a student
 * @Average = Total/3
 * Return: 0
 */

main()
{
	int roll_no, m1, m2, m3, total;
	float average;
	printf("Enter the roll number to be added: ");
	scanf("%d", &roll_no);
	printf("Enter marks 1: ");
	scanf("%d\n", &m1);
	printf("Enter marks 2: ");
	scanf("%d\n", &m2);
	printf("Enter marks 3: ");
	scanf("%d\n", &m3);
	total = m1 + m2 + m3;
	average = total/3.0;
	printf("\nStudent roll number is : %d\n", rol_no);
	printf("\nmark 1 : %d\n", m1);
	printf("\nmarks 2 : %d\n", m2);
	printf("\nmarks 3 : %d\n", m3);
	printf("\nTotal : %d\n", total);
	printf("\nAverage : %f\n", average);
	return 0;
