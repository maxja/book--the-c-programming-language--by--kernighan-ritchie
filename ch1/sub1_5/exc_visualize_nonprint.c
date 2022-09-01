#include <stdio.h>

/* replace tabs with \t, backspace with \b and back soildus to \\ */
void main(void) {
	int c;
	while((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
}
