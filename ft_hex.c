#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

static char	*ft_strupcase(char *str);
static char	*ft_stox(size_t n, int size);

int	hexl_handler(t_tag *node, va_list args)
{
	unsigned int	hex;
	char			*string;
	int				counter;

	hex = va_arg(args, unsigned int);
	string = ft_itox(hex, 8);
	flag_applier(node, &string);
	counter = send_output(string);
	free(string);
	free(node->flags);
	return (counter);
}

int	ptr_handler(t_tag *node, va_list args)
{
	size_t	pointer;
	char	*string;
	char	*tmp_str;
	int		counter;

	pointer = va_arg(args, size_t);
	tmp_str = ft_stox(pointer, 12);
	string = ft_strjoin("0x", tmp_str);
	flag_applier(node, &string);
	counter = send_output(string);
	free(string);
	free(tmp_str);
	free(node->flags);
	return (counter);
}

int	hexu_handler(t_tag *node, va_list args)
{
	unsigned int	hex;
	char			*string;
	int				counter;

	hex = va_arg(args, unsigned int);
	string = ft_itox(hex, 8);
	flag_applier(node, &string);
	string = ft_strupcase(string);
	counter = send_output(string);
	free(string);
	free(node->flags);
	return (counter);
}

static char	*ft_strupcase(char *str)
{
	int	counter;

	counter = -1;
	while (str[++counter] != '\0')
	{
		if (str[counter] >= 97 && str[counter] <= 122)
			str[counter] = (str[counter] - 32);
	}
	return (str);
}

static char	*ft_stox(size_t n, int size)
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
