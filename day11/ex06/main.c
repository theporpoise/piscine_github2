#include "ft_list.h"
#include <stdio.h>

t_list	*ft_list_push_params(int ac, char **av);

t_list	*ft_create_elem(void *data);

void	ft_list_clear(t_list **begin_list);

int main(int ac, char **av)
{
	t_list	*box;
	t_list	**temp;

	box = ft_list_push_params(ac, av);
	temp = &box;
	ft_list_clear(temp);

	return (0);
}
