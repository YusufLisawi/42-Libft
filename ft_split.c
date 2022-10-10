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

static int	ft_countwords(const char *str, char c)
{
	int	word;
	int	found_word;

	word = 0;
	found_word = 0;
	while (*str)
	{
		if (*str != c && found_word == 0)
		{
			word++;
			found_word = 1;
		}
		if (*str == c)
			found_word = 0;
		str++;
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

// int	main(void)
// {
// 	char	**s;

// 	s = ft_split("            world", ';');
// 	printf("%s", s[0]);
// }
