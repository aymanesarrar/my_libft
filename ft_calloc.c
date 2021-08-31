#include "libft.h"
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
