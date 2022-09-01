#include <stdio.h>

#define IN  1
#define OUT 0

/* print found words one by at a line */
void main(void) {
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t' && c != '\n') {
			putchar(c);
			state = IN;
		}
		else {
			if (state == IN)
				putchar('\n');
			state = OUT;
		}
	}
}
