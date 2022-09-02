#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
main() {
	float fahrenheit, celsius;
	float lower, upper, step;

	lower = -17.0;
	upper = 150.0;
	step = 11.0;

	printf("cels\tfahr\n"); /* heading */
	celsius = lower;
	while(celsius <= upper) {
		fahrenheit = celsius * 9.0 / 5.0 + 32.0;
		printf("%6.1f\t%3.1f\n", celsius, fahrenheit);
		celsius += step;
	}
}
