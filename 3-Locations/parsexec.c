#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "location.h"

bool parseAndExecute(char *input)
{
	char *verb = strtok(input, " \n");
	char *noun = strtok(NULL, " \n");
	if (verb != NULL)
	{
		if(strcmp(verb, "quit") == 0)
		{
			printf("Leaving so soon are we.. ok bye\n");
			return false;
		}
		else if (strcmp(verb, "look") == 0)
		{
            executeLook(noun);
		}
        else if (strcmp(verb, "go") == 0)
		{ 
            executeGo(noun);
		}
		else if (strcmp(verb, "taste") == 0)
		{
			printf("Please don't.\n");
		}
		else if (strcmp(verb, "help") == 0)
		{
			printf("Yes.. you need help.. badly\n");
		}
		else
		{
			printf("Hmm, what is '%s'?\n", verb);
		}

	}
	return true;
}
