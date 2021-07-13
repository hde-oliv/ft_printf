#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		send_output(char *string);
int		tag_handler(char **string, va_list args);
int		char_handler(va_list args);
int		str_handler(va_list args);
int		int_handler(va_list args);
int		uint_handler(va_list args);
int		ptr_handler(va_list args);
int		hex_handler(char converter, va_list args);
int		percent_handler(void);

#endif
