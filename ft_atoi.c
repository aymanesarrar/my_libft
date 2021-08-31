#include "libft.h"
static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || (c == ' '));
}

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	sign;
	int	index;

	nb = 0;
	sign = 1;
	index = 0;
	while (ft_isspace(nptr[index]))
		index++;
	if (nptr[index] == '-')
	{
		sign = -sign;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		nb = nb * 10 + ((int)nptr[index] - '0');
		index++;
	}
	return (nb * sign);
}
