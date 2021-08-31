#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cmp;
	unsigned char	*s2_cmp;

	s1_cmp = (unsigned char *)s1;
	s2_cmp = (unsigned char *)s2;
	while (n)
	{
		if (*s1_cmp != *s2_cmp)
			break;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*s1_cmp - *s2_cmp);
}
