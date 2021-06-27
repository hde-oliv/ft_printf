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
int		send_output(char *string);
int		ftag_handler(char **string, va_list args);
int		char_handler(char *flags, va_list args);
int		str_handler(char *flags, va_list args);
int		int_handler(char *flags, va_list args);
int		uint_handler(char *flags, va_list args);
int		ptr_handler(char *flags, va_list args);
int		hexu_handler(char *flags, va_list args);
int	 	hexl_handler(char *flags, va_list args);
void	tag_applier(char *flags, char **string);

#endif
