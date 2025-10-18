#include <stdio.h>
#include <stdlib.h>
int main() {
	
	unsigned int n;
	double rez = 1;
	char string[32];

	puts("Enter N:");
	scanf("%u", &n);

	for (unsigned int i = 1; i <= n; i++)
	{
		sprintf(string, "1.%u", i);
		rez *= atof(string);
	}

	printf("Result = %f", rez);

	return 0;
}