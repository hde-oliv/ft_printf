#include "libft.h"
#include "ft_printf.h"

static char	*ft_strupcase(char *str);
static char	*ft_stox(size_t n);
static char	*ft_uitox(unsigned int n);

int	ptr_handler(va_list args)
{
	size_t			pointer;
	char			*string;
	char			*tmp_str;
	int				counter;

	pointer = va_arg(args, size_t);
	if (!pointer)
		return (write(1, "0x0", 3));
	tmp_str = ft_stox(pointer);
	string = ft_strjoin("0x", tmp_str);
	free(tmp_str);
	counter = send_output(string);
	free(string);
	return (counter);
}

int	hex_handler(char converter, va_list args)
{
	unsigned int	hex;
	char			*string;
	int				counter;

	hex = va_arg(args, unsigned int);
	string = ft_uitox(hex);
	if (converter == 'X')
		counter = send_output(ft_strupcase(string));
	else
		counter = send_output(string);
	free(string);
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

static char	*ft_stox(size_t n)
{
	ssize_t		i;
	char		p[17];

	i = 16;
	p[i] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	while (--i != -1 && n != 0)
	{
		if ((n % 16) < 10)
			p[i] = ((n % 16)) + 48;
		else
			p[i] = (n % 16) + 87;
		n = n / 16;
	}
	return (ft_strdup(&p[i + 1]));
}

static char	*ft_uitox(unsigned int n)
{
	ssize_t		i;
	char		p[9];

	i = 8;
	p[i] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	while (--i != -1 && n != 0)
	{
		if ((n % 16) < 10)
			p[i] = ((n % 16)) + 48;
		else
			p[i] = (n % 16) + 87;
		n = n / 16;
	}
	return (ft_strdup(&p[i + 1]));
}
