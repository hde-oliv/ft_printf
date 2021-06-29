#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

int	char_handler(t_tag *node, va_list args)
{
	char	*string;
	int		counter;

	string = ft_calloc(sizeof(char), 2);
	string[0] = va_arg(args, int);
	flag_applier(node, &string);
	counter = send_output(string);
	free(node->flags);
	free(string);
	return (counter);
}

int	str_handler(t_tag *node, va_list args)
{
	char	*string;
	int		counter;

	string = ft_strdup(va_arg(args, char*));
	flag_applier(node, &string);
	counter = send_output(string);
	free(node->flags);
	free(string);
	return (counter);
}
