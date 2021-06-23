#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	if (lst == NULL)
		return (0);
	i = 1;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
