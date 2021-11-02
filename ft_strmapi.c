/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:20:49 by aysarrar          #+#    #+#             */
/*   Updated: 2021/11/01 17:37:37 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	size;
	unsigned int	index;
	char			*new_str;

	size = ft_strlen(s) + 1;
	index = 0;
	new_str = malloc(size);
	if (!new_str)
		return (NULL);
	new_str[size - 1] = '\0';
	while (s[index])
	{
		new_str[index] = (f)(index, s[index]);
		index++;
	}
	return (new_str);
}
