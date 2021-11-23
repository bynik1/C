#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = upper;
			
	printf("%3s\t%3s\n", "C", "F");

	while (fahr >= lower) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%3d\n", fahr, celsius);
		fahr -= step;
	}
	
	return 0;
}

