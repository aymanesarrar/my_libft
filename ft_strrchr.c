#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int	index;

	while (s[index])
		index++;
	while (index >= 0)
	{
		if (s[index] == c)
			return ((char *)(s + index));
		index--;
	}
	return (NULL);
}
