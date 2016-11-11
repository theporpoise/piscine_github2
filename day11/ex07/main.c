#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);

t_list	*ft_create_elem(void *data);

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

void	ft_list_clear(t_list **begin_list);

int main(int ac, char **av)
{
	t_list	*box;
	t_list	*nbox;

	box = ft_list_push_params(ac, av);
	nbox = ft_list_at(box, 2);

	printf("data in box is:%s ", nbox->data);
	return (0);
}
