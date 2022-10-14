/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:29:47 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/11 18:05:29 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *str, char c)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			word++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (word);
}

static int	ft_sizeofword(char const *s, char c, int iter)
{
	int	size;

	size = 0;
	while (s[iter] && s[iter] != c)
	{
		iter++;
		size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		words_count;
	int		word_size;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words_count = ft_countwords(s, c);
	splited = (char **) malloc (sizeof(char *) * (words_count + 1));
	if (!splited)
		return (NULL);
	while (j < words_count)
	{
		while (s[i] == c)
			i++;
		word_size = ft_sizeofword(s, c, i);
		splited[j] = ft_substr(s, i, word_size);
		i += word_size;
		j++;
	}
	splited[j] = 0;
	return (splited);
}
