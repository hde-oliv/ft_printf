#include "libftprintf.h"
#include "libft.h"

static char c = 'a';
static char s[6] = {'s', 't', 'i', 'f', 'f', '\0'};
static int	i = 1984;
static unsigned int u = 3000000000;
static char *p = s;

static void ft_printf_with_no_data_conversions_and_valid_string(void)
{
	ft_printf("Hello World!\n");
}

static void ft_printf_with_no_data_conversions_and_empty_string(void)
{
	ft_printf("");
}

static void ft_printf_with_no_data_conversions_and_newline(void)
{
	ft_printf("\n");
}

static void ft_printf_with_one_char_conversion_and_empty_string(void)
{
	ft_printf("%c\n", c);
}

static void ft_printf_with_multiple_char_conversion_and_empty_string(void)
{
	ft_printf("%c%c%c%c%c\n", c, c, c, c, c);
}

static void ft_printf_with_one_char_conversion_and_valid_string(void)
{
	ft_printf("This is the first letter: %c\n", c);
}

static void ft_printf_with_multiple_char_conversion_and_valid_string(void)
{
	ft_printf("These are the first letter: %c and %c, or %c and %c\n", c, c, c, c);
}

static void ft_printf_with_multiple_char_conversion_before_valid_string(void)
{
	ft_printf("%c%c%c%c%c <- My printf char test!\n", c, c, c, c, c);
}

static void ft_printf_with_one_string_conversion_and_empty_string(void)
{
	ft_printf("%s\n", s);
}

static void ft_printf_with_multiple_string_conversion_and_empty_string(void)
{
	ft_printf("%s%s%s%s%s\n", s, s, s, s, s);
}

static void ft_printf_with_one_string_conversion_and_valid_string(void)
{
	ft_printf("The brand of my notebook is %s\n", s);
}

static void ft_printf_with_multiple_string_conversion_and_valid_string(void)
{
	ft_printf("The brands of my notebooks are: %s and %s, %s or %s\n", s, s, s, s);
}

static void ft_printf_with_multiple_string_conversion_before_valid_string(void)
{
	ft_printf("%s%s%s%s%s <- My printf string test!\n", s, s, s, s, s);
}

static void ft_printf_with_one_integer_conversion_and_empty_string(void)
{
	ft_printf("%i\n", i);
}

static void ft_printf_with_multiple_integer_conversion_and_empty_string(void)
{
	ft_printf("%i%i%i%i%i\n", i, i, i, i, i);
}

static void ft_printf_with_one_integer_conversion_and_valid_string(void)
{
	ft_printf("The year of doom is %i\n", i);
}

static void ft_printf_with_multiple_integer_conversion_and_valid_string(void)
{
	ft_printf("The years of doom are: %i and %i, %i or %i\n", i, i, i, i);
}

static void ft_printf_with_multiple_integer_conversion_before_valid_string(void)
{
	ft_printf("%i%i%i%i%i <- My printf integer test!\n", i, i, i, i, i);
}

static void ft_printf_with_one_integer_d_conversion_and_empty_string(void)
{
	ft_printf("%d\n", i);
}

static void ft_printf_with_multiple_integer_d_conversion_and_empty_string(void)
{
	ft_printf("%d%d%d%d%d\n", i, i, i, i, i);
}

static void ft_printf_with_one_integer_d_conversion_and_valid_string(void)
{
	ft_printf("The year of doom is %d\n", i);
}

static void ft_printf_with_multiple_integer_d_conversion_and_valid_string(void)
{
	ft_printf("The years of doom are: %d and %d, %d or %d\n", i, i, i, i);
}

static void ft_printf_with_multiple_integer_d_conversion_before_valid_string(void)
{
	ft_printf("%d%d%d%d%d <- My printf integer_d test!\n", i, i, i, i, i);
}

static void ft_printf_with_one_unsigned_integer_conversion_and_empty_string(void)
{
	ft_printf("%u\n", u);
}

static void ft_printf_with_multiple_unsigned_integer_conversion_and_empty_string(void)
{
	ft_printf("%u%u%u%u%u\n", u, u, u, u, u);
}

static void ft_printf_with_one_unsigned_integer_conversion_and_valid_string(void)
{
	ft_printf("A number bigger than INT_MAX is %u\n", u);
}

static void ft_printf_with_multiple_unsigned_integer_conversion_and_valid_string(void)
{
	ft_printf("Some numbers bigger than INT_MAX: %u and %u, %u or %u\n", u, u, u, u);
}

static void ft_printf_with_multiple_unsigned_integer_conversion_before_valid_string(void)
{
	ft_printf("%u%u%u%u%u <- My printf unsigned_integer test!\n", u, u, u, u, u);
}

static void ft_printf_with_one_pointer_conversion_and_empty_string(void)
{
	ft_printf("%p\n", p);
}

static void ft_printf_with_multiple_pointer_conversion_and_empty_string(void)
{
	ft_printf("%p%p%p%p%p\n", p, p, p, p, p);
}

static void ft_printf_with_one_pointer_conversion_and_valid_string(void)
{
	ft_printf("Look at this incredible pointer %p\n", p);
}

static void ft_printf_with_multiple_pointer_conversion_and_valid_string(void)
{
	ft_printf("Look at these incredible pointers: %p and %p, %p or %p\n", p, p, p, p);
}

static void ft_printf_with_multiple_pointer_conversion_before_valid_string(void)
{
	ft_printf("%p%p%p%p%p <- My printf pointer test!\n", p, p, p, p, p);
}

static void ft_printf_with_one_low_hex_conversion_and_empty_string(void)
{
	ft_printf("%x\n", p);
}

static void ft_printf_with_multiple_low_hex_conversion_and_empty_string(void)
{
	ft_printf("%x%x%x%x%x\n", p, p, p, p, p);
}

static void ft_printf_with_one_low_hex_conversion_and_valid_string(void)
{
	ft_printf("Look at this incredible low_hex %x\n", p);
}

static void ft_printf_with_multiple_low_hex_conversion_and_valid_string(void)
{
	ft_printf("Look at these incredible low_hexes: %x and %x, %x or %x\n", p, p, p, p);
}

static void ft_printf_with_multiple_low_hex_conversion_before_valid_string(void)
{
	ft_printf("%x%x%x%x%x <- My printf low_hex test!\n", p, p, p, p, p);
}

static void ft_printf_with_one_up_hex_conversion_and_empty_string(void)
{
	ft_printf("%X\n", p);
}

static void ft_printf_with_multiple_up_hex_conversion_and_empty_string(void)
{
	ft_printf("%X%X%X%X%X\n", p, p, p, p, p);
}

static void ft_printf_with_one_up_hex_conversion_and_valid_string(void)
{
	ft_printf("Look at this incredible up_hex %X\n", p);
}

static void ft_printf_with_multiple_up_hex_conversion_and_valid_string(void)
{
	ft_printf("Look at these incredible up_hexes: %X and %X, %X or %X\n", p, p, p, p);
}

static void ft_printf_with_multiple_up_hex_conversion_before_valid_string(void)
{
	ft_printf("%X%X%X%X%X <- My printf up_hex test!\n", p, p, p, p, p);
}

static void ft_printf_with_one_percent_conversion_and_empty_string(void)
{
	ft_printf("%%\n");
}

static void ft_printf_with_multiple_percent_conversion_and_empty_string(void)
{
	ft_printf("%%%%%%%%%%\n");
}

static void ft_printf_with_one_percent_conversion_and_valid_string(void)
{
	ft_printf("Look at this incredible percent %%\n");
}

static void ft_printf_with_multiple_percent_conversion_and_valid_string(void)
{
	ft_printf("Look at these incredible percents: %% and %%, %% or %%\n");
}

static void ft_printf_with_multiple_percent_conversion_before_valid_string(void)
{
	ft_printf("%%%%%%%%%% <- My printf percent test!\n");
}

int main(void)
{
	ft_printf("========General Tests========\n");
	ft_printf_with_no_data_conversions_and_valid_string();
	ft_printf_with_no_data_conversions_and_empty_string();
	ft_printf_with_no_data_conversions_and_newline();
	ft_printf("========Char Tests========\n");
	ft_printf_with_one_char_conversion_and_empty_string();
	ft_printf_with_multiple_char_conversion_and_empty_string();
	ft_printf_with_one_char_conversion_and_valid_string();
	ft_printf_with_multiple_char_conversion_and_valid_string();
	ft_printf_with_multiple_char_conversion_before_valid_string();
	ft_printf("========String Tests========\n");
	ft_printf_with_one_string_conversion_and_empty_string();
	ft_printf_with_multiple_string_conversion_and_empty_string();
	ft_printf_with_one_string_conversion_and_valid_string();
	ft_printf_with_multiple_string_conversion_and_valid_string();
	ft_printf_with_multiple_string_conversion_before_valid_string();
	ft_printf("========Integer Tests========\n");
	ft_printf_with_one_integer_conversion_and_empty_string();
	ft_printf_with_multiple_integer_conversion_and_empty_string();
	ft_printf_with_one_integer_conversion_and_valid_string();
	ft_printf_with_multiple_integer_conversion_and_valid_string();
	ft_printf_with_multiple_integer_conversion_before_valid_string();
	ft_printf("========Integer-D Tests========\n");
	ft_printf_with_one_integer_d_conversion_and_empty_string();
	ft_printf_with_multiple_integer_d_conversion_and_empty_string();
	ft_printf_with_one_integer_d_conversion_and_valid_string();
	ft_printf_with_multiple_integer_d_conversion_and_valid_string();
	ft_printf_with_multiple_integer_d_conversion_before_valid_string();
	ft_printf("========Unsigned Integer Tests========\n");
	ft_printf_with_one_unsigned_integer_conversion_and_empty_string();
	ft_printf_with_multiple_unsigned_integer_conversion_and_empty_string();
	ft_printf_with_one_unsigned_integer_conversion_and_valid_string();
	ft_printf_with_multiple_unsigned_integer_conversion_and_valid_string();
	ft_printf_with_multiple_unsigned_integer_conversion_before_valid_string();
	ft_printf("========Pointer Tests========\n");
	ft_printf_with_one_pointer_conversion_and_empty_string();
	ft_printf_with_multiple_pointer_conversion_and_empty_string();
	ft_printf_with_one_pointer_conversion_and_valid_string();
	ft_printf_with_multiple_pointer_conversion_and_valid_string();
	ft_printf_with_multiple_pointer_conversion_before_valid_string();
	ft_printf("========Lowercase Hexadecimal Tests========\n");
	ft_printf_with_one_low_hex_conversion_and_empty_string();
	ft_printf_with_multiple_low_hex_conversion_and_empty_string();
	ft_printf_with_one_low_hex_conversion_and_valid_string();
	ft_printf_with_multiple_low_hex_conversion_and_valid_string();
	ft_printf_with_multiple_low_hex_conversion_before_valid_string();
	ft_printf("========Uppercase Hexadecimal Tests========\n");
	ft_printf_with_one_up_hex_conversion_and_empty_string();
	ft_printf_with_multiple_up_hex_conversion_and_empty_string();
	ft_printf_with_one_up_hex_conversion_and_valid_string();
	ft_printf_with_multiple_up_hex_conversion_and_valid_string();
	ft_printf_with_multiple_up_hex_conversion_before_valid_string();
	ft_printf("========Percent Tests========\n");
	ft_printf_with_one_percent_conversion_and_empty_string();
	ft_printf_with_multiple_percent_conversion_and_empty_string();
	ft_printf_with_one_percent_conversion_and_valid_string();
	ft_printf_with_multiple_percent_conversion_and_valid_string();
	ft_printf_with_multiple_percent_conversion_before_valid_string();
}