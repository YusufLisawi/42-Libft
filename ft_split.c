/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:29:47 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/08 18:25:04 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *str, char c)
{
	int	count;
	int	found_word;

	count = 0;
	found_word = 0;
	while (*str)
	{
		if (*str != c && found_word == 0)
		{
			found_word = 1;
			count++;
		}
		if (*str == c)
			found_word = 0;
		str++;
	}
	return (count);
}

static int	ft_sizeofword(char const *s, char c, int iter)
{
	int	count;

	count = 0;
	while (s[iter] != c && s[iter])
	{
		count++;
		iter++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words_len;
	char	**split;
	int		word_size;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	words_len = ft_countwords(s, c);
	split = (char **)malloc(sizeof(char *) * (words_len + 1));
	if (!split)
		return (NULL);
	while (j < words_len)
	{
		while (s[i] == c)
			i++;
		word_size = ft_sizeofword(s, c, i);
		split[j] = ft_substr(s, i, word_size);
		i += word_size;
		j++;
	}
	split[j] = 0;
	return (split);
}

// int	main(void)
// {
// 	char	**s;

// 	s = ft_split("            world", ';');
// 	printf("%s", s[0]);
// }
