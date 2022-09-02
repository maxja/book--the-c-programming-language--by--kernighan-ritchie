#include <stdio.h>

/* remove string with multiple blanks to one */
void main(void) {
	int c, pc;
	while((c = getchar()) != EOF) {
		if (c != ' ' || (pc != ' '))
			putchar(c);
		pc = c;
	}
}
