#include <stdio.h>

/* count characters in input */
void main(void) {
	long nc;
	nc = 0;
	while((getchar() != EOF) == 1)
		++nc;
	printf("%ld\n", nc);
}
