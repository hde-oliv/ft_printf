#include "libftprintf.h"
#include "libft.h"

static char c = 'a';

static void ft_printf_with_no_data_conversions_and_valid_string(void)
{
	ft_printf("Hello World!\n");
}

static void ft_printf_with_no_data_conversions_and_empty_string(void)
{
	ft_printf("");
}

static void ft_printf_with_one_char_conversion_and_empty_string(void)
{
	ft_printf("%c", c);
}

static void ft_printf_with_multiple_char_conversion_and_empty_string(void)
{
	ft_printf("%c%c%c%c%c", c, c, c, c, c);
}

static void ft_printf_with_one_char_conversion_and_valid_string(void)
{
	ft_printf("This is the first letter: %c", c);
}

static void ft_printf_with_multiple_char_conversion_and_valid_string(void)
{
	ft_printf("These are the first letters: %c and %c, %c or %c", c, c, c, c);
}

int main(void)
{
	ft_printf_with_no_data_conversions_and_valid_string();
	ft_printf_with_no_data_conversions_and_empty_string();
	ft_printf_with_one_char_conversion_and_empty_string();
	ft_printf_with_multiple_char_conversion_and_empty_string();
	ft_printf_with_one_char_conversion_and_valid_string();
	ft_printf_with_multiple_char_conversion_and_valid_string();
}
