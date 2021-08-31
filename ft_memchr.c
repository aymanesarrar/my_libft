#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (*(ptr + i) == c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
