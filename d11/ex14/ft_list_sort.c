#include "ft_list.h"

void	find_greatest(t_list *list_start, int(*cmp)())
{
	t_list *tail;
	t_list *head;
	t_list *greatest;

	if (list_start)
	{
		tail = list_start;
		greatest = tail;
		while (tail->next)
		{
			tail = tail->next;
			if (cmp(tail, greatest) < 0)
				greatest = tail;
		}
		return (greatest);
	}
	return ((void *)0);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *tail;
	t_list *head;
	t_list *future;
	t_list *greatest;
	t_list *new_tail;

	if (*begin_list)
	{
		tail = *begin_list;
		new_tail = ((void *)0)
		while (tail->next)
		{
			head = tail->next;
			greatest = find_greatest(tail, cmp);
			while (head->next)
			{
				future = head->next;
				if (cmp(head, greatest) == 0)
				{
					tail->next = future;
					head->next = new_tail;
					new_tail = head;
				}
				else
					tail = head;
				head = future;
			}
		}
	}
}
