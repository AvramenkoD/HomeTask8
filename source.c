#include <stdio.h>

int main() {
	
	unsigned int n;
	double rez = 1;

	puts("Enter N:");
	scanf("%u", &n);

	if (n >= 10)
	{ 
		puts("Error"); 
		return -1;
	}

	for (unsigned int i = 1; i <= n; i++)
	{
		rez *= 1. + i*0.1;
	}

	printf("Result = %f", rez);

	system("pause");
}