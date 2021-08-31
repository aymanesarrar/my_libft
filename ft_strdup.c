#include "libft.h"
char	*ft_strdup(const char *s)
{
	int		size;
	int		index;
	char	*ptr;

	size = ft_strlen(s) + 1;
	index = 0;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	while (s[index])
	{
		ptr[index] = s[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
