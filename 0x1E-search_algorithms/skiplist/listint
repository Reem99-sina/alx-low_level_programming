#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;
skiplist_t *create_skiplist(int *array, size_t size);
void free_skiplist(skiplist_t *list);
void print_skiplist(const skiplist_t *list);
void init_express(skiplist_t *list, size_t size);
#endif /* SEARCH_ALGOS_H */
