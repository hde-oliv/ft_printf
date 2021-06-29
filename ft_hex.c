#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

static char	*ft_strupcase(char *str);

int	hexl_handler(t_ftag *node, va_list args)
{
	size_t	pointer;
	char	*string;
	int		counter;

	pointer = va_arg(args, size_t);
	string = ft_itoh(pointer);
	tag_applier(node, &string);
	counter = send_output(string);
	free(string);
	free(node->flags);
	return (counter);
}

int	ptr_handler(t_ftag *node, va_list args)
{
	size_t	pointer;
	char	*string;
	int		counter;

	pointer = va_arg(args, size_t);
	string = ft_itoh(pointer);
	tag_applier(node, &string);
	counter = send_output(string);
	free(string);
	free(node->flags);
	return (counter);
}

int	hexu_handler(t_ftag *node, va_list args)
{
	size_t	pointer;
	char	*string;
	int		counter;

	pointer = va_arg(args, size_t);
	string = ft_itoh(pointer);
	tag_applier(node, &string);
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
