#include "shell.h"

/**
 * cdir_shell - This change the current working directory of the shell
 * @args: array of arguments
 */
void cdir_shell(char **args)
{
	char *dir = args[1];
	int my_val;


	if (dir == NULL)
	{
		dir = _getenv("HOME");
		if (dir == NULL)
		{
			puts("cd: No HOME directory found\n");
			return;
		}
	}

	my_val = chdir(dir);
	if (my_val == -1)
	{
		perror("cd");
	}
}
