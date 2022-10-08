/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:18:10 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/07 10:15:42 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *str)
{
	size_t	count;

	count = 1;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	s_len = len;
	if (!s)
		return (NULL);
	if (s_len > ft_len(s))
	{
		substring = (char *)malloc((unsigned int) ft_len(s) - start + 1);
		s_len = ft_len(s) - start;
	}
	else
		substring = (char *)malloc(s_len + 1);
	if (!substring)
		return (NULL);
	if (start >= ft_len(s))
	{
		substring[0] = '\0';
		return (substring);
	}
	ft_memcpy(substring, s + start, s_len);
	substring[s_len] = '\0';
	return (substring);
}
