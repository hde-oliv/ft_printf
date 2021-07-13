#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

int	char_handler(t_tag *node, va_list args)
{
	char	to_print;
	char	*string;
	int		counter;

	string = ft_calloc(sizeof(char), 2);
	to_print = va_arg(args, int);
	if (!to_print)
		counter = write(1, &to_print, 1);
	else
	{
		string[0] = to_print;
		flag_applier(node, &string);
		counter = send_output(string);
	}
	free(node->flags);
	free(string);
	return (counter);
}

int	str_handler(t_tag *node, va_list args)
{
	char	*string;
	int		counter;

	string = ft_strdup(va_arg(args, char*));
	if (!string)
	{
		write(1, "(null)", 6);
		counter = -1;
	}
	else
	{
		flag_applier(node, &string);
		counter = send_output(string);
	}
	free(node->flags);
	free(string);
	return (counter);
}
