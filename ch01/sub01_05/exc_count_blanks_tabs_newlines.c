#include <stdio.h>

/* count lines in input */
void main(void) {
	int c, blanks, tabs, newlines;
	blanks = tabs = newlines = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++newlines;
		else if (c == ' ')
			++blanks;
		else if (c == '\t')
			++tabs;
	printf("blanks: %d\t tabs: %d\t newlines: %d\n", blanks, tabs, newlines);
}
