#ifndef HEADER_FILE
#define HEADER_FILE
#include <string.h>

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
}list_t;

size_t print_list(const list_t *h);

#endif
