#include "main.h"                                 #include <unistd.h>

/**
 * _putchar - to write the character c to stdout
 * @c: the character to print
 * return 1 on success
 * and -1 on error, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
