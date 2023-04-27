#ifndef _LINKED_LISTS_
#define _LINKED_LISTS_

typedef struct linked_list
{
	char *str;
	unsigned int len;
	struct linked_list *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
