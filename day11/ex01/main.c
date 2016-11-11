#include <stdio.h>
#include "ft_list.h"

int	main()
{
	char	*data;
	char	*data2;
	t_list	*first_element;
	int		i;

	data = "thefirstone\n";
	data2 = "secondone\n";
	first_element = ft_create_elem(data);
	ft_list_push_back(&first_element, data2);
	printf("data of 1 is:%s", first_element->data);

	i = 0;
	while(first_element->next && i < 2)
	{
		first_element = first_element->next;
		i++;
	}
	printf("data of 2 is:%s", first_element->data);


}
