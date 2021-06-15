#include "libft.h"

long long	ft_atoll(const char *str)
{
	long long	minus;
	long long	res;

	minus = -1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		minus = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
		res = (res * 10) - (*str++ - '0');
	return (minus * res);
}
