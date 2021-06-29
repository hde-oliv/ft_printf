#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

int	char_handler(t_ftag *node, va_list args)
{
	char	*string;
	int		counter;

	string = ft_calloc(sizeof(char), 2);
	string[0] = va_arg(args, int);
	tag_applier(node, &string);
	counter = send_output(string);
	free(node->flags);
	free(string);
	return (counter);
}

int	str_handler(t_ftag *node, va_list args)
{
	char	start;
	char	*string;
	int		counter;

	start = (char) va_arg(args, int);
	string = ft_strdup(&start);
	tag_applier(node, &string);
	counter = send_output(string);
	free(node->flags);
	free(string);
	return (counter);
}
