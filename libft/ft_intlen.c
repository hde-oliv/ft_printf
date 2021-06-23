#include "libft.h"

size_t	ft_intlen(int i)
{
	size_t	size;

	size = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		size++;
		i = i / 10;
	}
	return (size);
}
