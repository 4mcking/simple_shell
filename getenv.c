#include "shell.h"

/**
 * _get_env - gets the current env
 * @env: the env
 * Return: _env_parser function on success, NULL on failure
**/
char **_get_env(char *env)
{
	int inner;
	int outer;
	char *name = NULL;

	for (outer = 0; environ[outer] != NULL; outer++)
	{
		for (inner = 0; environ[outer][inner] != '='; inner++)
		{
			if (environ[outer][inner] != env[inner])
				break;
			if (environ[outer][inner] == env[inner])
			{
				if (env[inner + 1] == '\0' && environ[outer][inner + 1] == '=')
				{
					name = _strdup(&(environ[outer][inner + 2]));
					return (_env_parser(name));
				}
			}
		}
	}
	return (NULL);
}

/**
 * _env_parser- tokenizes the PATH
 * @name: the full PATH seperated by :'s
 * Return: an array of strings
**/
char **_env_parser(char *name)
{
	int token_inc;
	int tokencount;
	char *tokenize = NULL;
	int i;
	char **p = NULL;
	char *namestore = name;

	tokencount = 0;
	for (i = 0; name[i] != '\0'; i++)
	{
		if (name[i] == ':')
		{
			tokencount++;
		}
	}
	p = malloc(sizeof(char *) * (tokencount + 2));
	if (p != NULL)
	{
		token_inc = 0;
		tokenize = strtok(name, ":");
		while (token_inc < (tokencount + 1))
		{
			p[token_inc] = _strdup(tokenize);
			tokenize = strtok(NULL, ":");
			token_inc++;
		}
	p[token_inc] = NULL;
	}
	free(namestore);
	return (p);
}
