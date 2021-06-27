#include "libft.h"
#include "libftprintf.h"
#include <stdarg.h>

int	char_handler(char *flags, va_list args)
{
	char	*string;
	int		counter;

	string = ft_calloc(sizeof(char), 2);
	string[0] = va_arg(args, int);
	tag_applier(flags, &string);
	counter = send_output(string);
	free(flags);
	return (counter);
}
