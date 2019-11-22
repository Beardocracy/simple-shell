#include <stdio.h>
#include <string.h>

char *_strtok(char *str, char *delim)
{
	/* duplicate string with strdup so it doesn't touch the original string */
	char *input = str;
	char *lastWord = input;
	char *delimit = delim;
	/*int index = 0; */

	while (*input != '\0')
	{
		if(*input == *delimit)
		{
			*input = '\0';
			lastWord = input + 1;
		}
		input++;
	}
	return (lastWord);
}


int main()
{x
	char input2[] = "Guns, N, Roses";
        char delimit2[] = ",";

	char *token = _strtok(input2, delimit2);
	printf("%s", token);
	return(0);
}
