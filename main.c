#include "HashMap.h"

int main(void)
{
    HashMap *hm = HashMap_new();

    hm->put(hm, "key1", "value1");
    hm->get(hm, "key1");

    HashMap_free(hm);

    return 0;
}
