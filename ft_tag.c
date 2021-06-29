#include "libftprintf.h"
#include "libft.h"
#include <stdarg.h>

static int	ftag_validator(t_ftag *node, char *string);
static int	ftag_caller(t_ftag *node, va_list args);
static int	prefix_handler(char **string);
static int	percent_handler(t_ftag *node);

int	ftag_handler(char **string, va_list args)
{
	t_ftag	node;
	int		bool;
	int		counter;

	while (**string)
	{
		counter = prefix_handler(string);
		if (counter)
			return (counter);
		bool = ftag_validator(&node, *string);
		if (bool)
			return (ftag_caller(&node, args));
	}
	return (0);
}

static int	ftag_validator(t_ftag *node, char *string)
{
	char	tags[10];
	char	*tag;
	int		i;

	ft_strlcpy(tags, "cspdiuxX%", 11);
	i = 0;
	tag = NULL;
	while (i != 9 && !tag)
		tag = ft_strchr(string, tags[i++]);
	if (tag)
	{
		node->converter = tags[i - 1];
		node->flags = ft_substr(string, 1, tag - string);
		return (1);
	}
	return (0);
}

static int	ftag_caller(t_ftag *node, va_list args)
{
	if (node->converter == 'c')
		return (char_handler(node, args));
	if (node->converter == 's')
		return (str_handler(node, args));
	if (node->converter == 'p')
		return (ptr_handler(node, args));
	if (node->converter == 'd' || node->converter == 'i')
		return (int_handler(node, args));
	if (node->converter == 'u')
		return (uint_handler(node, args));
	if (node->converter == 'x')
		return (hexl_handler(node, args));
	if (node->converter == 'X')
		return (hexu_handler(node, args));
	return (percent_handler(node));
}

static int	prefix_handler(char **string)
{
	char	*start;
	int		counter;

	start = ft_strchr(*string, '%');
	if (*string == start)
		return (0);
	(*string)[start - *string] = '\0';
	counter = send_output(*string);
	*string = start + 1;
	return (counter);
}

static int	percent_handler(t_ftag *node)
{
	node->converter = 0;
	return (0);
}
