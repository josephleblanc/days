#include "ft_list.h"

void	(t_list **begin_list1, t_list *begin_list2)
{
	t_list *end1;
	
	if (*begin_list1)
	{		
		end1 = *begin_list1;
		while (end1->next)
			end1 = end1->next;
		end1->next = begin_list2
	}
}
