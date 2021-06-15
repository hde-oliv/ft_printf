#include "tests.h"

static void print_result(int bool, int reset);

int main(void)
{
	/* Call the tests here */
}

static void print_result(int bool, int reset)
{
	static int	print_result_counter;

	if (reset)
		print_result_counter = 0;
	if (bool)
		printf("%i.OK   ", print_result_counter);
	else
		printf("%i.KO   ", print_result_counter);
	print_result_counter++;
}
