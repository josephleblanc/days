#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tail;
	t_list *head;
	t_list *future;

	if (*begin_list)
	{
		tail = *begin_list;
		if (!(tail->next) && !(cmp(tail->data, data_ref)))
			*begin_list = ((void *)0);
		else
		{
			head = tail->next;
			if (!(head->next) && cmp(head->data, data_ref))
				tail->next = ((void *)0);
			else if (head->next)
			{
				caterpillar(tail, head, future, data_ref, cmp);
				if (!(cmp(head->data, data_reference)))
					tail->next = ((void *)0);
			}
		}
	}
}

void	caterpillar(t_list *t, t_list *h, t_list *f, void *d, int (*cmp)())
{
	while (h->next)
	{
		f = h->next;
		if (!(cmp(h->data, d)))
		{
			t->next = f;
			h->next = ((void *)0);
		}
		else
			t = h;
		h = f
	}
}
