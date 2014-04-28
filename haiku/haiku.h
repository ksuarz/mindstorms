#ifndef HAIKU_H 
#define HAIKU_H 

#define HASHTABLE_SIZE 4096

struct haiku {
    char* line1;
    char* line2;
    char* line3;
};

/**
 * Represents a single word. Contains its textual representation and a count of
 * how many syllables it occupies.
 */
typedef struct word {
    char *text;
    unsigned char syllables;
} word_t;

#endif
