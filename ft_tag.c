#include "ft_printf.h"
#include "libft.h"

static int	tag_caller(char converter, va_list args);
static int	prefix_handler(char **string);
static int	tag_invalid(char converter);
static char	converter_handler(char **string);

int	tag_handler(char **string, va_list args)
{
	int		counter;

	if (**string)
	{
		counter = prefix_handler(string);
		if (counter)
			return (counter);
		return (tag_caller(converter_handler(string), args));
	}
	return (0);
}

static char	converter_handler(char **string)
{
	char	tag;

	tag = (*string)[1];
	*string = *string + 2;
	return (tag);
}

static int	tag_caller(char converter, va_list args)
{
	if (converter == 'c')
		return (char_handler(args));
	if (converter == 's')
		return (str_handler(args));
	if (converter == 'p')
		return (ptr_handler(args));
	if (converter == 'd' || converter == 'i')
		return (int_handler(args));
	if (converter == 'u')
		return (uint_handler(args));
	if (converter == 'x' || converter == 'X')
		return (hex_handler(converter, args));
	if (converter == '%')
		return (percent_handler());
	else
		return (tag_invalid(converter));
}

static int	prefix_handler(char **string)
{
	char	*tmp_str;
	char	*start;
	int		counter;

	start = ft_strchr(*string, '%');
	if (!start)
	{
		counter = send_output(*string);
		*string = ft_strchr(*string, '\0');
		return (counter);
	}
	if (!(start - *string))
		return (0);
	tmp_str = ft_substr(*string, 0, start - *string);
	if (!tmp_str)
		return (-1);
	counter = send_output(tmp_str);
	*string = start;
	free(tmp_str);
	return (counter);
}

static int	tag_invalid(char converter)
{
	ft_putchar_fd('%', 1);
	ft_putchar_fd(converter, 1);
	return (2);
}
