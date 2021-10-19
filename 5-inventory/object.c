#include <stdio.h>
#include "object.h"

OBJECT objs[] = {
    {"an open field",       "field",    NULL},
    {"a dark, creepy cave", "cave",     NULL},
    {"a silver coin",       "silver",   field},
    {"a gold coin",         "gold",     cave},
    {"a chunky guard",      "guard",    cave},
    {"yourself",            "yourself", field}
};
