#include "shell.h"

/**
 * _strcmp - compares two strings to see if they are the same
 * @s1: string 1
 * @s2: string 2
 * Return: s1[i] - s2[j] on failure or 0 on success
**/
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	for (; s1[i] != '\0' || s2[j] != '\0'; i++, j++)
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
	}
return (0);
}

/**
 * stringlength - gets the length of a string
 * @s: a string
 * Return: length of string
**/
int stringlength(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
		return (i);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: NULL on failure or a pointer to the new string on success
**/
char *_strdup(char *str)
{
	char *duplicate = NULL;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];
return (duplicate);
}

/**
 * _putchar - writes a single character to stdout
 * @c: character to write
 * Return: the character
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * dubbie_free - frees double pointers
 * @dubbie_pointie: a double pointer
 * Return: void
**/
void dubbie_free(char **dubbie_pointie)
{
	int i = 0;

	while (dubbie_pointie[i])
	{
		free(dubbie_pointie[i]);
		i++;
	}
	free(dubbie_pointie);
}
