#include <stdio.h>

/* copy input to output */
main() {
	int c;
	
	while(((c = getchar()) != EOF) == 1) {
		putchar(c);
	}
}
