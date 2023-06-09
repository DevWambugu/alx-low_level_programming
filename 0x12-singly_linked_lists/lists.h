#ifndef _LINKED_LISTS_
#define _LINKED_LISTS_
#include <stddef.h>

typedef struct linked_list
{
	char *str;
	unsigned int len;
	struct linked_list *next;
} list_t;
int _strlen(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void print_before_main_function(void) __attribute__ ((constructor));

#endif
