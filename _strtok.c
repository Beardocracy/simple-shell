#include "holberton.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

char *_strtok(char *string, const char *delim)
{
	int *currentIndex = 0;
	int counterDelim;
	int *stringCounter = currentIndex;
	char *cloneString = string;
	const char *cloneDelim = delim;

	char cString =(char)malloc(sizeof(char));

	if ( !cloneString || !counterDelim || cloneString[currentIndex] == NULL)
	{
		return (NULL);
	}

	for (;cloneString[stringCounter] != '\0'; stringCounter++)
	{
		for (counterDelim = 0; cloneDelim[counterDelim] != '\0'; counterDelim++)
		{
			if (cloneString[stringCounter] == cloneDelim[counterDelim])
			{
				/** i don't know if it should equal the
				    delim or create a clone delimiter */

				cloneString[stringCounter] = '\0';
				continue;

			}
			printf("%s[%i]", cloneString[stringCounter]);
		}
	}
	return (0);
}

int main(void)
{
	char string = "my name is khan";
	char delim[] = " ";
	//char newstr[100];
	char *str = _strtok(string1, delim);
	while(str)
	{
		printf("%s", str);
		free(str);
		str = _strtok(string1, delm);
	}
	return(0);
}
