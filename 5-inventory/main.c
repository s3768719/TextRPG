#include <stdio.h>
#include <stdlib.h>
#include "parsexec.h"

static char input[100] = "";

static bool getInput(void)
{
	printf("--> ");
	return fgets(input, sizeof input, stdin) != NULL;
}

int main(void)
{
	printf("Text based RPG\n");
	printf("--------------\n");
	printf("Welcome, you are currently located in a place.\n");
	while (parseAndExecute(input) && getInput());
	return EXIT_SUCCESS;
}
