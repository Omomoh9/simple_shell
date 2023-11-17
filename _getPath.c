#include "shell.h"

/**
 * path_get - funct that returns the value of the PATH enviroment variable.
 *
 * Return: A Pointer to the value of $PATH.
 */
char *path_get(void)
{
	return (_getenv("PATH"));
}
