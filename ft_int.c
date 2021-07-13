#include "libft.h"
#include "ft_printf.h"

static size_t	ft_uintlen(unsigned int i);
static char		*ft_uitoa(unsigned int n);

int	int_handler(va_list args)
{
	char	*string;
	int		integer;
	int		counter;

	integer = va_arg(args, int);
	string = ft_itoa(integer);
	counter = send_output(string);
	free(string);
	return (counter);
}

int	uint_handler(va_list args)
{
	char				*string;
	unsigned int		integer;
	int					counter;

	integer = va_arg(args, unsigned int);
	string = ft_uitoa(integer);
	counter = send_output(string);
	free(string);
	return (counter);
}

static size_t	ft_uintlen(unsigned int i)
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

static char	*ft_uitoa(unsigned int n)
{
	size_t		i;
	size_t		minus;
	char		*p;

	i = ft_uintlen(n);
	minus = n < 0;
	i += minus;
	p = (char *) malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	p[i] = '\0';
	if (minus)
		p[0] = '-';
	while (--i != (minus - 1))
	{
		if ((n % 10) < 0)
			p[i] = ((n % 10) * -1) + 48;
		else
			p[i] = (n % 10) + 48;
		n = n / 10;
	}
	return (p);
}
