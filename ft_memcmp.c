/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:19:23 by aysarrar          #+#    #+#             */
/*   Updated: 2021/11/01 17:39:14 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cmp;
	unsigned char	*s2_cmp;
	size_t			index;

	s1_cmp = (unsigned char *)s1;
	s2_cmp = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (*(s1_cmp + index) != *(s2_cmp + index))
			break ;
		index++;
	}
	if (index == n)
		return (0);
	return (*(s1_cmp + index) - *(s2_cmp + index));
}
