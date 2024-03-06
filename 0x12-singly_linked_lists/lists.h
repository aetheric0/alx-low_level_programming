#ifndef HEADER_FILE
#define HEADER_FILE
#include <string.h>

/**
 * struct list_t - structure for a linked list
 * @str: string variable
 * @len: number
 * @next: pointer to next node
 **/

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif
