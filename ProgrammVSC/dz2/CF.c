#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	
	printf("%3s\t%3s\n", "C", "F");

	while (celsius <= upper) {
		fahr = (9 * celsius + 160) / 5;
		printf("%3d\t%3d\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}
