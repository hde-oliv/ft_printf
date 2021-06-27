#include "libftprintf.h"
#include "libft.h"
#include <stdarg.h>

static	int	has_format_tag(char *string)
{
	if (ft_strchr(string, '%'))
		return (1);
	return (0);
}

int	send_output(char *string)
{
	return (write(1, string, ft_strlen(string)));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		tmp_count;
	char	*tmp_format;

	va_start(args, format);
	if (!has_format_tag((char *)format))
		return (send_output((char *)format));
	tmp_format = (char *)format;
	count = ftag_handler(&tmp_format, args);
	tmp_count = 1;
	while (tmp_count)
	{
		tmp_count = ftag_handler(&tmp_format, args);
		count += tmp_count;
	}
	va_end(args);
	return (count);
}
