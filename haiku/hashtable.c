#include "hashtable.h"
#include <stdlib.h>

/**
 * A hash function for strings.
 */
int hash(void *string) {
    // TODO
}

/**
 * A comparison function for string data.
 */
int compare(void *str1, void *str2) {
    return strcmp((char *) str1, (char *) str2);
}

/**
 * Creates a new node with the given data.
 */
node_t *node_create(void *data, node_t *next) {
    node_t *node = (node_t *) malloc(sizeof(node_t));
    if (node) {
        node->data = data;
        node->next = next;
    }
    return node;
}

/**
 * Destroys the node, freeing all associated memory.
 */
void node_destroy(node_t *node) {
    if (node) {
        free(node->data);
        free(node);
    }
}

/**
 * Creates a new empty hash table with the given comparison and hashing
 * functions.
 */
hashtable_t *hashtable_create(int (*hash)(void *), int (*cmp)(void *, void *)) {
    hashtable_t *ht = (hashtable_t *) malloc(sizeof(hashtable_t));
    if (ht) {
        ht->hash = hash;
        ht->compare = cmp;
    }
    return ht;
}

/**
 * Adds the given item to the hash table.
 */
int hashtable_add(hashtable_t *, void *) {
    // TODO
}

/**
 * Destroys the hash table, freeing all associated memory.
 */
void hashtable_destroy(hashtable_t *) {
    // TODO
}
