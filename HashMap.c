#include "HashMap.h"

#include <stdlib.h>
#include <stdint.h>

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

HashMap *HashMap_new()
{
    HashMap *hm = malloc(sizeof(HashMap) + sizeof(_HashMap));
    hm->get = HashMap_get;
    hm->put = HashMap_put;

    _HashMap *_hm = (_HashMap*)(hm + 1);
    _hm->size = 0;
    _hm->cap = INITIAL_CAPACITY;
    _hm->buckets = calloc(_hm->cap, sizeof(Node));

    return hm;
}

void HashMap_free(HashMap *hm)
{
    // ...
    free(hm);
}
