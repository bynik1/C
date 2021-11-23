#include <stdio.h>

int main()
{
	int seconds;
	int minutes, hours, days;

	seconds = 100000;
	
	minutes = seconds / 60;
	seconds -= minutes * 60;  
	
	hours = minutes / 60;
	minutes -= hours * 60;

	days = hours / 24;
	hours -= days * 24;

	printf("%d%s%d%s%d%s%d%s\n", days, "d ", hours, "h ", minutes, "m ", seconds, "s");
	
	return 0;
}
