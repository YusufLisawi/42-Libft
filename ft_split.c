/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 22:29:47 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/05 20:05:18 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordlen(char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c)
		count++;
	return (count);
}

size_t	is_delimiter(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

size_t	ft_countwords(char *str, char c)
{
	int	count;
	int	is_char;

	count = 0;
	is_char = 0;
	while (*str)
	{
		if (*str != c && is_char == 0)
		{
			is_char = 1;
			count++;
		}
		if (*str == c)
			is_char = 0;
		str++;
	}
	return (count);
}

char	*alloc_str(char *s, char c)
{
	
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*word;
	char	**strs_arr;

	*strs_arr = (char **)malloc(sizeof(char *) * ft_countwords(s, c));
	i = 0;
	while (s[i] != '\0')
	{
		word = malloc(sizeof(char) * ft_wordlen(s, c));
	}
}

int main()
{
	printf("%zu", ft_countwords(";;;asdf;afsdf;afsa", ';'));
}