#include "libft.h"

int	*ft_range(int min, int max)
{
	int		*array;
	size_t	i;

	if (min < 0 || max < 0)
		return (NULL);
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
