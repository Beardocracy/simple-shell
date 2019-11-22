#include <stdio.h>

int main()
{
	char input[] = "Guns, N, Roses";
	char *lastWord = &input[0];
	int index = 0;
	char delimit[] = " ";
	int counterDelim = 0;

	while (input[index] != '\0')
	{
		if (input[index] == delimit[counterDelim])
		{
			input[index] = '\0';
			printf("%s\n", lastWord);
			/* here either return lastWord and make it static to kee
			   track of the position between function calls */
			/* Or put each last word into an array of strings
			   char ** and return them all at once */
			lastWord = &input[index + 1];
		}
		if (!delimit[counterDelim])
		{
			return(input[index]);
		}
		index++;
	}
	printf("%s\n", lastWord);
	return(0);
}
