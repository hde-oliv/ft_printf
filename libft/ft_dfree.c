#include "libft.h"

void	ft_dfree(char **a, size_t i)
{
	while (i > 0)
	{
		free(a[i]);
		i--;
	}
	free(a[0]);
	free(a);
}
