/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelaissa <yelaissa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:59:07 by yelaissa          #+#    #+#             */
/*   Updated: 2022/10/09 16:01:35 by yelaissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	dst_len;
	size_t	tmp_dst_len;

	s = dstsize;
	if (s == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	tmp_dst_len = ft_strlen(dst);
	if (s < dst_len)
		return (s + ft_strlen(src));
	i = 0;
	while (s > 0 && dst_len < dstsize - 1 && src[i] != '\0')
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (tmp_dst_len + ft_strlen(src));
}
