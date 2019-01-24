#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int(*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp->next)
	{
		if (cmp(tmp->data, data_ref))
			f(tmp->data);
		tmp = tmp->next;
	}
}
