#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

int main(void)
{
	t_list *list;
	char	*data;

	data = "on the way";
	list = ft_create_elem(data);
	printf("tlist data is:%s", list->data);
	return (0);
}


