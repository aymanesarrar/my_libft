#include "libft.h"
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *lst;
	while (tmp != NULL)
	{
		next = tmp->next;
		(del)(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}
