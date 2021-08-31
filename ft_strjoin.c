#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	s1_len;
	size_t	s2_len;
	size_t	index;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	final = malloc(s1_len + s2_len + 1);
	if (!final)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		final[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		final[s1_len] = s2[index];
		index++;
		s1_len++;
	}
	final[s1_len] = '\0';
	return (final);
}
