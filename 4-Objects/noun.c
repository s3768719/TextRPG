#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "object.h"

static bool objectHasTag(OBJECT *obj, const char *noun)
{
    return noun != NULL && *noun != '\0' && strcmp(noun, obj->tag) == 0;
}
