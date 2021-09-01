#include "libft.h"
char	*ft_strdup(const char *s)
{
	int		size;
	char	*ptr;

	size = ft_strlen(s) + 1;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, size);
	return (ptr);
}
