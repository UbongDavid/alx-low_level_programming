#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the main function is executed.
 */
void hare(void)
{
	char *line1 = "You're beat! and yet, you must allow,";
	char *line2 = "I bore my house upon my back!";

	printf("%s\n%s\n", line1, line2);
}
