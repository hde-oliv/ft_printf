#include "libftprintf.h"
#include "libft.h"
#include <stdarg.h>

static int	tag_validator(t_tag *node, char **string);
static int	tag_caller(char **string, t_tag *node, va_list args);
static int	prefix_handler(char **string);
static int	tag_invalid(char **string);

int	tag_handler(char **string, va_list args)
{
	t_tag	node;
	int		bool;
	int		counter;

	if (**string)
	{
		counter = prefix_handler(string);
		if (counter)
			return (counter);
		bool = tag_validator(&node, string);
		if (bool)
			return(tag_caller(string, &node, args));
		else
			return (tag_invalid(string));
	}
	return (0);
}

static int	tag_validator(t_tag *node, char **string)
{
	char	*tag_list;
	char	*tag_ptr;
	int		i;

	tag_list = "0.-*123456789";
	tag_ptr = (void *) 1;
	i = 1;
	while (tag_ptr && *(*string + i))
	{
		tag_ptr = ft_strchr(tag_list, *(*string + i));
		i++;
	}
	node->converter = *(*string + i - 1);
	node->flags = ft_substr(*string, 1, (*string + i - 1) - *string);
	*string = (*string + i);
	return (1);
}

static int	tag_caller(char **string, t_tag *node, va_list args)
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
	if (node->converter == '%')
		return (percent_handler(node));
	else
		return (tag_invalid(string));
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
	counter = send_output(tmp_str);
	*string = start;
	free(tmp_str);
	return (counter);
}

static int	tag_invalid(char **string)
{
	char	*tmp_str;
	char	*next;
	int		counter;

	next = ft_strchr(*string + 1, '%');
	if (!next)
	{
		counter = send_output(*string);
		*string = ft_strchr(*string, '\0');
		return (counter);
	}
	tmp_str = ft_substr(*string, 0, next - *string);
	counter = send_output(tmp_str);
	*string = next;
	free(tmp_str);
	return (counter);
}
