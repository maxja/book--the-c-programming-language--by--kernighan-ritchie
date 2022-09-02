#include <stdio.h>

/* count tabs, spaces and new lines in input */
main() {
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
