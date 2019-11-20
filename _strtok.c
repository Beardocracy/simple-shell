#include "holberton.h"
#include <string.h>
#include 

/**
 *
 *
 *
 */

char *strtok(char *string, const char *delim)
{
	int *currentIndex = 0;
	int counterDelim;
	int *stringCounter = currentIndex;
	char *cloneString = string;

	char stringsize = malloc(sizeof(char) * strlen);

	if (string | counterDelim | currentIndex == NULL)
	{
		return (NULL);
	}

	for (; string[stringCounter] != NULL; stringCounter++)
	{
		for(counterDelim = 0; counterDelim != NULL; counterDelim++)
		{
			if(cloneString == delim)
			{
				/** i don't know if it should equal the
				    delim or create a clone delimiter */

				cloneString = '\0';
				continue;
				printf("%s", cloneString);
			}
		}
	}
}
