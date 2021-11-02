/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysarrar <aysarrar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:20:00 by aysarrar          #+#    #+#             */
/*   Updated: 2021/11/01 17:37:07 by aysarrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	len;
	size_t	index;
	size_t	in;

	len = 0;
	index = 0;
	in = 1;
	while (s[index])
	{
		if (s[index] != c)
		{
			if (in)
				len++;
			in = 0;
		}
		else
			in = 1;
		index++;
	}
	return (len);
}

static char	*ft_allocate_word(const char *s, char c)
{
	size_t	index;
	char	*word;

	index = 0;
	while (s[index] && s[index] != c)
		index++;
	word = malloc(index + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, index + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	jndex;
	size_t	in;
	char	**words;

	words = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	index = -1;
	jndex = 0;
	in = 1;
	while (s[++index])
	{
		if (s[index] != c)
		{
			if (in)
				words[jndex++] = ft_allocate_word(s + index, c);
			in = 0;
		}
		else
			in = 1;
	}
	words[jndex] = NULL;
	return (words);
}
