#include <stdio.h>
#include "object.h"

int listObjectsAtLocation(OBJECT *location)
{
    int count = 0;
    OBJECT *obj;
    for (obj = objs; obj < endOfObjs; obj++)
    {
        if(obj != player && obj->location == location)
        {
            if(count++ == 0)
            {
                printf("You see:\n");
            }
            printf("%s\n", obj->description);
        }
    }
    return count;
}

int listLocationsNearby(OBJECT *location)
{
    int count = 0;
    OBJECT *obj;
    for (obj = objs; obj < endOfObjs; obj++)
    {
        if(obj != player && obj->location == NULL)
        {
            if(count++ == 0)
            {
                printf("Locations nearby are:\n");
            }
            if(player->location != obj){
                printf("%s\n", obj->description);
            }
        }
    }
    return count;
}
