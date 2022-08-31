#include <stdio.h>

/*
 *  while (there's another line)
 *       if (it's longer than the previous longest)
 *           (save it)
 *           (save its length)
 *   print longest line
 */

#define MAXLINE 1000

int _getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest line */
int main() 
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = _getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
		printf("%s", longest);
	return 0;
}

/* getline: read line into s, return length */
int _getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to' */
void copy(char to[], char from[]) 
{
	int i;
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
