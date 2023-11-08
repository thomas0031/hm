#include "HashMap.h"

#include <stdlib.h>

#define INITIAL_CAPACITY 16

typedef struct _HashMap _HashMap;
typedef struct Node Node;

struct Node {
    uint32_t hash;
    const void *key;
    const void *value;
    Node *next;
};

struct _HashMap
{
    hash_func hash_f;
    cmp_func cmp_f;
    size_t size;
    size_t cap;
    Node *buckets;
};

static void *HashMap_get(HashMap *self, const void *key)
{
    // ...
    return NULL;
}

static void HashMap_put(HashMap *self, const void *key, const void *value)
{
    // ...
}

HashMap *HashMap_new(hash_func hash_f, cmp_func cmp_f)
{
    HashMap *hm = malloc(sizeof(HashMap) + sizeof(_HashMap));
    hm->get = HashMap_get;
    hm->put = HashMap_put;

    _HashMap *_hm = (_HashMap*)(hm + 1);
    _hm->hash_f = hash_f;
    _hm->cmp_f = cmp_f;
    _hm->size = 0;
    _hm->cap = INITIAL_CAPACITY;
    _hm->buckets = malloc(_hm->cap * sizeof(Node));

    return hm;
}

void HashMap_free(HashMap *hm)
{
    // ...
    free(hm);
}
