#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i = 0;
	char *str = "Hello World!\n";

	while (str[i] != '\0')
		printf("%c", str[i++]);

	return 0;
}
