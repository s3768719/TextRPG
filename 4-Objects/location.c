#include <stdio.h>
#include <string.h>
#include "object.h"
#include "location.h"

void executeLook(const char* noun){
    if(noun != NULL && strcmp(noun, "around") == 0)
    {
        printf("You are in %s.\n", "TODO");
    }
    else
    {
        printf("I don't understand what you want to see.\n");
    }
}

void executeGo(const char* noun){
    
    printf("I don't understand where you want to go.\n");
}
