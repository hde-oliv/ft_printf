#include "libft.h"
#include "libftprintf.h"

int	percent_handler(t_tag *node)
{
	char	*string;
	int		counter;

	string = ft_calloc(sizeof(char), 2);
	string[0] = '%';
	flag_applier(node, &string);
	counter = send_output(string);
	free(node->flags);
	free(string);
	return (counter);
}
