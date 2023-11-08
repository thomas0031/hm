#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdint.h>

typedef struct HashMap HashMap;
typedef uint32_t (*hash_func)(const void* key);
typedef int (*cmp_func)(const void* a, const void* b);

struct HashMap {
    void*   (*get)(HashMap* self, const void* key);
    void    (*put)(HashMap* self, const void* key, const void* value);
};

HashMap* HashMap_new(const hash_func hash_f, const cmp_func cmp_f);
void HashMap_free(HashMap* hm);

#endif // !HASHMAP_H
