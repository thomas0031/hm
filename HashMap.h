#ifndef HASHMAP_H
#define HASHMAP_H

typedef struct HashMap HashMap;

struct HashMap {
    void*   (*get)(HashMap* self, const void* key);
    void    (*put)(HashMap* self, const void* key, const void* value);
};

HashMap* HashMap_new();
void HashMap_free(HashMap* hm);

#endif // !HASHMAP_H
