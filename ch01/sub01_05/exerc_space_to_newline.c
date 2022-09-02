#include <stdio.h>

#define OUT 0
#define IN 1

/* one or multiple spaces to one line */
main() {
	int c, state;

	state = IN;
	while((c = getchar()) != EOF) {
		if (c == ' ' && state == OUT) {
			putchar('\n');
			state = IN;
		}
		if (c != ' ' && c != '\n') {
			putchar(c);
			state = OUT;
		}
	}
}
