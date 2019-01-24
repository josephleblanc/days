#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp->next)
	{
		if (cmp(tmp->data, *data_ref))
			return (tmp);
	}
}
