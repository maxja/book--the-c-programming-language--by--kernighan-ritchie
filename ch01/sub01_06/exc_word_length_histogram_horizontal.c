#include <stdio.h>

/* draw the histogram with the bars horizontal */
int main(void) {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n')
			putchar('\n');
		else 
			putchar('*');
	}

	return 0;
}
