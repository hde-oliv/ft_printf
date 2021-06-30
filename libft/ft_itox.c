#include "libft.h"

char	*ft_itox(unsigned int n, int size)
{
	ssize_t		i;
	char		*p;

	i = size;
	p = (char *) malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	p[i] = '\0';
	while (--i != -1)
	{
		if ((n % 16) < 10)
			p[i] = ((n % 16)) + 48;
		else
			p[i] = (n % 16) + 88;
		n = n / 16;
	}
	return (p);
}
