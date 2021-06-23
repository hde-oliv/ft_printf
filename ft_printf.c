#include "libftprintf.h"
#include "libft.h"
#include <stdarg.h>

static int has_format_tag(char *string)
{
	if (ft_strchr(string, '%'))
		return (1);
	return (0);
}

void	send_output(char *string)
{
	ft_putstr_fd(string, 1);
}

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	if (!has_format_tag((char *) format))
		send_output((char *) format);
	ftags_handler((char *)format, args);
	va_end(args);
	return (len);
}
