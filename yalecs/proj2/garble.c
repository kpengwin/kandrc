#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

/* Pipe text from stdin to stdout following the following rules
 * 1. Consecutive haracters are swapped if they are
 * 	a. Both lowercase
 * 	b. Have the same ASCII encoding mod 7
 * 2. Swapped characters aren't eligible for further swaps
 * 3. Other characters are not reordered
*/
bool equal_mod_7(int a, int b)
{
	if (a%7 == b%7) return true;
	return false;
}

bool both_lowercase(int a, int b)
{
	if (islower(a) && islower(b)) return true;
	return false;
}

int main(int argc, char**argv)
{
	int c;
	int prev_char = EOF;
	bool swapped;

	//should refactor this so it's clear what happens every loop
	while ((c = getchar()) != EOF) {
		if (both_lowercase(c,prev_char) && equal_mod_7(c,prev_char)) {
			putchar(c);
			swapped = true;
		}
		if (prev_char != EOF) putchar(prev_char);
		if (!swapped) {
			prev_char = c;
		} else {
			prev_char = EOF;
			swapped = false;
		}
	}
	if (prev_char != EOF) putchar(prev_char);

	return 0;
}


