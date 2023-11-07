#ifndef HASHMAP_H
#define HASHMAP_H

typedef struct HashMap HashMap;

HashMap* HashMap_new();
void HashMap_free(HashMap* hm);

#endif // !HASHMAP_H
