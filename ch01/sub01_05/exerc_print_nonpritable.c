#include <stdio.h>

/* replace tabs with \t, backspace with \b and back soildus to \\ */
main() {
	int c;
	
	while((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}
}
