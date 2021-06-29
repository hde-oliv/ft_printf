#include "libft.h"

char	*ft_itoh(size_t hex)
{
	size_t		i;
	size_t		minus;
	char		*ptr;

	minus = 0;
	i = 1;
	i += minus;
	ptr = (char *) malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[i] = '\0';
	hex = 1;
	if (minus)
		ptr[0] = '-';
	return (ptr);
}
