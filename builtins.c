#include "shell.h"

/**
 * sh_exit - this exits the shell
 * description: exit builtin
 * @argv: argv
 * @buffer: buffer
 * Return: 0
 */

int sh_exit(char **argv, char *buffer)
{
	free(argv);
	free(buffer);
	exit(0);
}

/**
 * sh_env - prints the environment details
 * description: env builtin
 * Return: 0
 */
int sh_env(void)
{
	int i;
	int j;

	char *string = NULL;

	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; environ[i][j] != '\0'; j++)
		{
			string = (&(environ[i][j]));
			write(STDOUT_FILENO, string, stringlength(string));
			break;
		}
		_putchar('\n');
	}
	return (0);
}
/**
* sh_setenv - sets the env
* @argv: arguments
* Return: 0
*/
int sh_setenv(char **argv)
{
	argv = argv;
	return (0);
}

/**
* sh_unsetenv - unsets the env
* @argv: arguments
* Return: 0
*/
int sh_unsetenv(char **argv)
{
	argv = argv;
	return (0);
}

/**
 * sh_cd - changes current directory
 * @argv: arguments
 * Return: 0
**/
int sh_cd(char **argv)
{
	argv = argv;
	return (0);
}
