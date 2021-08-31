#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;
	size_t			index;

	index = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (index < n)
	{
		*(dest_ptr + index) = *(src_ptr + index);
		index++;
	}
	return (dest);
}
