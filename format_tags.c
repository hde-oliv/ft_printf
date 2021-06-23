#include "libftprintf.h"
#include "libft.h"
#include <stdarg.h>

static int	ftags_validator(char *string);
static void	ftags_caller(int bool, void *argument); /* Swap int bool for t_ftag struct later */

void	*ftags_handler(char *string, va_list args)
{
	int	bool;

	bool = ftags_validator(string);
	if (bool)
		ftags_caller(bool, argument);
	
}

static int	ftags_validator(char *string)
{
	char	tags[10];
	char	*ptr;
	int		i;

	ft_strlcpy(tags, " cspdiuxX%", 11);
	i = 1;
	ptr = NULL;
	while (i != 10 && !ptr)
	{
		ptr = ft_strchr(string, tags[i]); /* Needs a ceiling */
		i++;
	}
	if (ptr)
		return (i);
	return (0);
}

static void	ftags_caller(int bool, void *argument)
{
	if (bool == 1)
		char_handler(argument);
	else if (bool == 2)
		string_handler(argument);
	else if (bool == 3 || bool == 7 || bool == 8)
		hex_handler(argument);
	else if (bool == 4 || bool == 5 || bool == 6)
		integer_handler(argument);
	else
		undefined_handler();
}
