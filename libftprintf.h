#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_ftag
{
	char	converter;
	char	*flags;
}	t_ftag;

int		ft_printf(const char *format, ...);
int		send_output(char *string);
int		ftag_handler(char **string, va_list args);
int		char_handler(t_ftag *node, va_list args);
int		str_handler(t_ftag *node, va_list args);
int		int_handler(t_ftag *node, va_list args);
int		uint_handler(t_ftag *node, va_list args);
int		ptr_handler(t_ftag *node, va_list args);
int		hexu_handler(t_ftag *node, va_list args);
int	 	hexl_handler(t_ftag *node, va_list args);
void	tag_applier(t_ftag *node, char **string);

#endif
