include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* global variable */
extern char **environ;
/** they are the same because environ and env is the same
 * but env is abbreviated.
 * it does make sense.
 */
char *_getenv(const char *name)
{
        int index2 = 0;
        int index = 0;
        char *currentName;
        char *delims = "=";

        while(environ[index] != NULL)
        {
                printf("String Data = %s\n", environ[index]);
                currentName = strtok(environ[index], delims);
                /** strtok is modifying environment index **/

                if(strcmp(currentName, name)== 0)
                {
                        /** printf("String Data 2 = %s\n", environ[index]); **/
                        /** printf("Found Match = %s\n", currentName); **/
                        return(strstr(environ[index], delims));
                }

                while(currentName != NULL)
                {
                        printf("%s\n", currentName);
                        currentName = strtok(NULL, delims);
                        ++index2;
                }

                ++index;
        }
        return(0);
}

int main(int argc, char **argv, char **env)
{
        char *value = _getenv("PATH");
        printf("Final Value = %s\n", value);
        return(0);
}
