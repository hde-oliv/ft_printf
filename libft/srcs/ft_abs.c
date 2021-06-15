int	ft_abs(int n)
{
	int	mask;

	mask = n >> (sizeof(int) * 7);
	return ((n + mask) ^ mask);
}
