/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:20:52 by aysarrar          #+#    #+#             */
/*   Updated: 2021/11/01 17:37:39 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_cmp;
	unsigned char	*s2_cmp;

	s1_cmp = (unsigned char *)s1;
	s2_cmp = (unsigned char *)s2;
	while (*s1_cmp && *s2_cmp && *s1_cmp == *s2_cmp && n > 0)
	{
		n--;
		s1_cmp++;
		s2_cmp++;
	}
	if (n == 0)
		return (0);
	return (*s1_cmp - *s2_cmp);
}
