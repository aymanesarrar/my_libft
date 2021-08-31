#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	index;
	size_t	jndex;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	index = 0;
	jndex = 0;
	if (dst_size >= size)
		return (size + src_size);
	index = dst_size;
	while (src[jndex] && jndex + index < size - 1)
	{
		dst[index + jndex] = src[jndex];
		jndex++;
	}
	dst[index + jndex] = '\0';
	return (dst_size + src_size);
}
