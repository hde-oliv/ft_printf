#include "libftprintf.h"
#include "libft.h"

static char c = 'a';

/* No Flags */
static void printf_with_no_data_conversions_and_valid_string(void)
{
	printf("Hello World!\n");
}

static void printf_with_no_data_conversions_and_empty_string(void)
{
	printf("");
}

static void printf_with_one_char_conversion_and_empty_string(void)
{
	printf("%c", c);
}

static void printf_with_multiple_char_conversion_and_empty_string(void)
{
	printf("%c%c%c%c%c", c, c, c, c, c);
}

static void printf_with_one_char_conversion_and_valid_string(void)
{
	printf("This is the first letter: %c", c);
}

static void printf_with_multiple_char_conversion_and_valid_string(void)
{
	printf("These are the first letters: %c and %c, %c or %c", c, c, c, c);
}

int main(void)
{
	/* No Flags tests */
	printf_with_no_data_conversions_and_valid_string();
	printf_with_no_data_conversions_and_empty_string();
	printf_with_one_char_conversion_and_empty_string();
	printf_with_multiple_char_conversion_and_empty_string();
	printf_with_one_char_conversion_and_valid_string();
	printf_with_multiple_char_conversion_and_valid_string();
}
