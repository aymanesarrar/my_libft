#include "libft.h"
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			index;

	index = 0;
	ptr = (unsigned char *)s;
	while (index < n)
	{
		*(ptr + index) = c;
		index++;
	}
	return (s);
}
