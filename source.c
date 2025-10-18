#include <stdio.h>
#include <math.h>
int main() {
	
	unsigned int n;
	double rez = 1;

	unsigned int temp = 0;
	unsigned int digits = 0;

	puts("Enter N:");
	scanf("%u", &n);

	for (unsigned int i = 1; i <= n; i++)
	{
		unsigned int temp = i;
		unsigned int digits = 0;
		while (temp > 0) {
			temp /= 10;
			digits++;
		}

		rez *= 1.0 + i / pow(10,digits);
	}

	printf("Result = %f", rez);

	return 0;
}