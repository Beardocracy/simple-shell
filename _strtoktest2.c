#include <stdio.h>
#include <string.h>
char *_strtok(char *strInput, const char *strDelim)
{
        static char *strStatic = NULL;
        static int intStart;
        int intPosStatic;
        int intPosDelim = 0;

        if( !strDelim)
        {
                return (NULL);
        }

        if( !strStatic )
        {
                strStatic = strInput;
                intStart = 0;
        }

        intPosStatic = intStart;

	while( strStatic[] != '\0')
	{

		if( strStatic[intPosStatic] == strDelim[intPosDelim])
		{
			strStatic[intPosStatic] = '\0';

			intStart = intPosStatic + 1;

			return (&strStatic[intStart]);
		}
		intPosDelim++;
	}
	intPosStatic++;
	return (&strStatic[intStart]);
}

int main()
{
        char input2[] = "Guns, N, Roses";
        char delimit2[] = ",";

        char *token = _strtok(input2, delimit2);
	printf("%s\n", token);
        token = _strtok(NULL, delimit2);
        printf("%s\n", token);
        return(0);
}
