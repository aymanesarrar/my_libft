#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (index < len)
	{
		str[index] = s[start];
		index++;
		start++;
	}
	str[index] = '\0';
	return (str);
}
