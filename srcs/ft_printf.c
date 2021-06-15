#include "libftprintf.h"
#include "libft.h"

static int has_data_conversion(char *string)
{
	char	percentage;

	percentage = '%';
	if (ft_strchr(string, percentage) != NULL)
		return (1);
	else
		return (0);
}

static void	send_output(char *string)
{
	ft_putstr_fd(string, 1);
}

int ft_printf(const char *format, ...)
{
	va_list				args;
	t_list				*strings;
	t_data_converter	*converters;

	va_start(args, format);
	if (!has_data_conversion((char *) format))
		send_output((char *) format);
	converters = list_converters(format);
	va_end(args);

	return (ft_strlen(format));
}
