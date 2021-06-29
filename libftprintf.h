#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_tag
{
	char	converter;
	char	*flags;
}	t_tag;

int		ft_printf(const char *format, ...);
int		send_output(char *string);
int		tag_handler(char **string, va_list args);
int		char_handler(t_tag *node, va_list args);
int		str_handler(t_tag *node, va_list args);
int		int_handler(t_tag *node, va_list args);
int		uint_handler(t_tag *node, va_list args);
int		ptr_handler(t_tag *node, va_list args);
int		hexu_handler(t_tag *node, va_list args);
int	 	hexl_handler(t_tag *node, va_list args);
int		percent_handler(t_tag *node);
void	flag_applier(t_tag *node, char **string);

#endif
