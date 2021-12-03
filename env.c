#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

extern char **environ;
void env(void)
{
    int index = 0;
    char **env = environ;
    index = 0;

    while (env[index])
    {
        printf("%s\n", env[index]);
        ++index;
    }

}