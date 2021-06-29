#include "libft.h"
#include "libftprintf.h"

void	flag_applier(t_ftag *node, char **string)
{
	char	*temp_str;

	temp_str = *string;
	node->converter = 'a';
	*string = ft_strdup(*string);
	free(temp_str);
}
