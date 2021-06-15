#include "tests.h"

FILE 	file = fopen("~/Documents/Projects/42/ft_printf/tests/output.txt", "w");
int 	file_fd = open("~/Documents/Projects/42/ft_printf/tests/output.txt", O_RDONLY);
char 	**want;
char 	**got;

int printf(const char format, ...)
{
	va_list	args;
	int 	done;

	va_start(args, format)
	done = vfprintf(file, format, args);
	va_end(args);

	return (done);
}
/* Do the same as above to ft_printf */

static int	result_analyzer(char **got, char **want)
{
	if (!strcmp(*got, *want))
	{
		free(*got);
		free(*want);
		return (1);
	}
	free(*got);
	free(*want);
	return (0);
}

static void line_grabber(char **got, char **want)
{
	get_next_line(file_fd, got);
	get_next_line(file_fd, want);
}

/* Begin tests */

