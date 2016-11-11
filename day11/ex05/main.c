#include "ft_list.h"
#include <stdio.h>

int main(int ac, char **av)
{
	t_list	*box;

	box = ft_list_push_params(ac, av);
	while (box->next)
	{
		printf("%s\n", box->data);
		box = box->next;
	}
	return (0);
}
