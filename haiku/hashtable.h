#ifndef HASHTABLE_H
#define HASHTABLE_H

/**
 * A typical unary node for a linked list.
 */
typedef struct node {
    void *data;
    struct node *next;
} node_t;

/**
 * Represents a hash table.
 */
typedef struct hashtable {
    node_t *table[HASHTABLE_SIZE];
    int (*hash)(void *);
    int (*compare)(void *, void *);
} hashtable_t;

/**
 * Creates a new node with the given data.
 */
node_t *node_create(void *, node_t *);

/**
 * Destroys the node, freeing all associated memory.
 */
void node_destroy(node_t *);

/**
 * Creates a new empty hash table with the given comparison and hashing
 * functions.
 */
hashtable_t *hashtable_create(int (*)(void *), int (*)(void *, void *));

/**
 * Adds the given item to the hash table.
 */
int hashtable_add(hashtable_t *, void *);

/**
 * Returns the given item from the hash table.
 */
void *hashtable_get(hashtable_t *, void *);

/**
 * Destroys the hash table, freeing all associated memory.
 */
void hashtable_destroy(hashtable_t *);

#endif
