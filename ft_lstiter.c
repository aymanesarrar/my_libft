#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst)
	{	
		tmp = lst;
		while (tmp != NULL)
		{
			(f)(tmp->content);
			tmp = tmp->next;
		}
	}
}
