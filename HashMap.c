#include "HashMap.h"

#include <stdlib.h>

struct HashMap
{
    // ...
};

HashMap *HashMap_new()
{
    HashMap *hm = malloc(sizeof(HashMap));
    // ...
    return hm;
}

void HashMap_free(HashMap *hm)
{
    // ...
    free(hm);
}
