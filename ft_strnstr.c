#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	index;

	if (!little)
		return ((char *)big);
	index = 0;
	while (big[index] && len > 0)
	{
		if (ft_strncmp(big + index, little, ft_strlen(little)) == 0
			&& len >= ft_strlen(little))
			return ((char *)(big + index));
		index++;
		len--;
	}
	return (NULL);
}
