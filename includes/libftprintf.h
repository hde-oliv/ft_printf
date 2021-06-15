#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

typedef struct s_data_converter
{
	char 					converter;
	char 					*start;
	char 					*end;
	char 					*flags;
	struct s_data_converter *next;
}	t_data_converter;

int ft_printf(const char *format, ...);

#endif
