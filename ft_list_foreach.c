#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *tmp;

	while (tmp->next)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
}
