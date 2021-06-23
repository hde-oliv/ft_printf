#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

typedef struct s_ftag
{
	char	converter;
	char	*flags;
}	t_ftag;

int		ft_printf(const char *format, ...);
int		*ftags_handler(char *string, va_list args);

#endif
